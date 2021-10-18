#!/bin/bash

GREEN="\x1b[32m"
RED="\x1b[31m"
COLOR_OFF="\x1b[0m"

function test_makefile ()
{
	make re
	test $? -eq 0 && dispres "Make re" OK && return 0 \
		|| dispres "Make re" NOK
}
function test_isalpha ()
{
	gcc -Wall -Wextra -Werror testers/ft_isalpha_t.c -I . -L . -lft -o ft_isalpha_t
	test $? -eq 0 && dispres "Comp test_isalpha" OK \
		|| dispres "Comp test_isalpha" NOK

	./ft_isalpha_t
	rm ft_isalpha_t
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

test_makefile
test_isalpha

make fclean
