#!/bin/bash
gcc -wall -wextra -werror -pedantic -c *.c
ar rc lib all.a *.o
