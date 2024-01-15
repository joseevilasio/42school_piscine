#!/bin/sh

echo "Start compile ..."
cc -Wall -Werror -Wextra -c *.c
ar rcs libft.a *.o
echo "Done!"
