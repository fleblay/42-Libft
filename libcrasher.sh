#!/bin/bash

GREEN="\x1b[32m"
RED="\x1b[31m"
COLOR_OFF="\x1b[0m"

function test_makefile ()
{
	verbose && make $1 || make -s $1
	if [ $? -eq 0 ]
	then
		verbose && dispres "Make ${1}" OK
		return 0
	else
		dispres "Make ${1}" NOK
		return 1
	fi
}
function test_header ()
{
	verbose && echo "Running : norminette on header libft.h"
	norminette "libft.h" > "norm_libft_header_errorlog"
	if [ $? -eq 0 ]
	then
		dispres "Norme check header" OK
		rm norm_libft_header_errorlog 
		return 0
	else
		dispres "Norme check header" NOK
		echo "Check errorlog"
		return 1
	fi
}
function test_fx ()
{
	verbose && echo "Running : norminette on ft_${1}.c"
	norminette "ft_${1}.c" > "norm_${1}_errorlog"
	if [ $? -eq 0 ]
	then
		dispres "Norme check ft_${1}.c" OK
		rm norm_${1}_errorlog 
	else
		dispres "Norme check ft_${1}.c" NOK
		echo "Check errorlog"
		return 1
	fi
	verbose \
	&& echo "Running : gcc -Wall -Wextra -Werror testers/ft_${1}_t.c -I . -L . -lft -lbsdmini -o ft_${1}_t"
	gcc -Wall -Wextra -Werror testers/ft_${1}_t.c -I . -L . -lft -lbsdmini -o ft_${1}_t
	if [ $? -eq 0 ]
	then
		verbose && dispres "Compilation test_${1}" OK
	else
		dispres "Compilation test_${1}" NOK
		return 1
	fi
	echo "test_${1} results :" && ./ft_${1}_t
	verbose && echo "Removing test_${1}"
	rm ft_${1}_t
	echo -n $'\n'
	return 0
}
function dispres ()
{
	if test -z "$1" -o -z "$2"
	then
		echo "Argument manquant" && return 1
	elif test "$2" = "OK"
	then
		echo -e "${GREEN}${1} OK${COLOR_OFF}"
	elif test "$2" = "NOK"
	then
		echo -e "${RED}${1} NOK${COLOR_OFF}"
	fi
	return 0
}
function verbose ()
{
	[ "$VERBOSE" = "true" ] && return 0 || return 1
}

VERBOSE=""
RESTRICTED_TEST=""
TESTFILES=ft_*.c

while getopts :vr opt
do
	case $opt in
		v)
			VERBOSE="true"
			;;
		r)
			RESTRICTED_TEST="true"
			;;
		*)
			echo "`basename $0` : Bad usage of parameters"
			echo "`basename $0` [-v] [-r function_names_without_prefix_ft...]"
			exit 1
			;;
	esac
done

shift $(( OPTIND -1 ))

verbose && echo "Running in verbose mode"
test "$RESTRICTED_TEST" = "true" && TESTFILES="$@" && echo "Only testing : $@"

test_header
test_makefile clean
test_makefile fclean
test_makefile all
test_makefile re
test_makefile bonus

for fx in $TESTFILES
do
	#test_fx ${fx:3:-2}
	test_fx ${fx:3:${#fx}-5}
done

verbose && make fclean || make -s fclean
