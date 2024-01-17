.PHONY: all ft_display_file clean fclean re

all:	ft_display_file

clean:
	find ./ -name '*.o' -exec rm -f {} \;

fclean:	clean
	find ./ -name '*.out' -exec rm -f {} \;
	find ./ -name '*.a' -exec rm -f {} \;
	find ./ -name 'ft_display_file' -exec rm -f {} \;	

re:	fclean all

ft_display_file:	fclean
	cc -Wall -Wextra -Werror main.c -o ft_display_file
