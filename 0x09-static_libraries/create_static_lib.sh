#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libll.a *.0
ranlib liball.a
