#!/bin/bash

GREEN="\x1b[32m"
RED="\x1b[31m"
COLOR_OFF="\x1b[0m"

function test_makefile ()
{
	make "$1"
	test $? -eq 0 && dispres "Make ${1}" OK && return 0 \
		|| dispres "Make ${1}" NOK
}
function test_fx ()
{
	gcc -Wall -Wextra -Werror testers/ft_${1}_t.c -I . -L . -lft -o ft_${1}_t
	test $? -eq 0 && dispres "Compilation test_${1}" OK \
		|| dispres "Compilation test_${1}" NOK

	echo "test_${1} results :" && ./ft_${1}_t
	echo "Removing test_${1}" && rm ft_${1}_t
}
function dispres ()
{
	if test -z "$1" -o -z "$2"
	then
		echo "Argument manquant" && return 1
	elif test "$2" = "OK"
	then
		echo -e "${GREEN}${1} OK !!!${COLOR_OFF}"
	elif test "$2" = "NOK"
	then
		echo -e "${RED}${1} NOK !!!${COLOR_OFF}"
		exit 1
	fi
	return 0
}

VERBOSE="false"
RESTRICTED_TEST="false"
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
			echo "`basename $0` [-v] [-r function_names_without_prefix_ft]"
			exit 1
			;;
	esac
done

shift $(( OPTIND -1 ))

test "$VERBOSE" = "true" && echo "Running in verbose mode"
test "$RESTRICTED_TEST" = "true" && TESTFILES="$@" && echo "only testing : $@"

test_makefile clean
test_makefile fclean
test_makefile all
test_makefile re

for fx in $TESTFILES
do
	test_fx ${fx:3:-2}
done

make fclean
