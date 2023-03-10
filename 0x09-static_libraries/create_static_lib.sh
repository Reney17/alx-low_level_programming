#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -c *.c
ar -crs liball.a *.o
