#!/bin/bash
gcc -Wall -Wextra -Werror -D_FORTIFY_SOURCE=0 -c strlcat.c strlcpy.c strnstr.c
ar rc libsdmini.a *.o
