/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:45:03 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/31 13:04:18 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);
void	ft_aux(char *filepath, char *nbr);
void	ft_read(char *file, char *str, int size);
void	write_trio(char *trio, char *str, char *key, char *value);
void	parse_trios(char *nbr, int len, char *str, char *key, char *value);
void	ft_translate(char *str, char *nbr, char *key, char *value);
char	*add_10_pow_n(int n);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_str_is_numeric(char *str);
int		ft_checkdict(char *str, char *key, char *value);
char	*ft_strcat(char *dest, char c);

int	main(int argc, char *argv[])
{
	char	*filepath;

	filepath = "numbers.dict";
	if (argc == 2)
	{
		if (ft_str_is_numeric(argv[1]) == 1)
			ft_aux(filepath, argv[1]);
		else
			ft_putstr("Error\n");
	}
	else if (argc == 3)
	{
		if (ft_str_is_numeric(argv[2]) == 1)
			ft_aux(argv[1], argv[2]);
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}

/*Variavel que define dict padrao -> numbers.dict esta na pasta do arquivo main
ft_str_is_numeric verifica se o numero a converter sao digitos
Check args na cli, tem que ser '2'-> 'rush-02' '100', dict usado sera 
numbers.dict
Check args na cli, tem que ser '3'-> 'rush-02' 'other.dict' '100', dict usado
sera other.dict
Check args na cli, Se '1' ou for acima de '3'. Apresenta 'Error' por falta de
args ou args demais*/
