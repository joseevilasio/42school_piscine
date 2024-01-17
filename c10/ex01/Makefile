.PHONY: all $(TARGET) clean fclean re

TARGET := ft_cat

all:	$(TARGET)

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
	find ./ -name '$(TARGET)' -exec rm -f {} \;	

re:	fclean all

$(TARGET):	fclean libft.a
	cc -Wall -Wextra -Werror main.c -o $(TARGET) -L./lib/ -lft
