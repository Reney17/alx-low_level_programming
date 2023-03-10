#!/bin/bash
gcc -Wall -pendatic -werror -wextra -c *.c
ar rc liball.a *.o
