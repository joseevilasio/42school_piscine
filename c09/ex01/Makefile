.PHONY: all obj_files.o libft.a clean fclean re

all:	libft.a
	
obj_files.o:
	for file_source in ./srcs/*.c; do \
		file_obj="./srcs/$$(basename $${file_source%.c}).o"; \
		cc -Wall -Wextra -Werror -c "$${file_source}" -o "$${file_obj}"; \
	done

libft.a:	obj_files.o
	ar rcs ./lib/libft.a ./srcs/*.o

clean:
	find ./ -name '*.o' -exec rm -f {} \;

fclean:	clean	
	find ./ -name '*.out' -exec rm -f {} \;
	find ./ -name '*.a' -exec rm -f {} \;

re:	fclean all

main:	all
	cc -Wall -Wextra -Werror main.c -o main -L./lib/ -lft
