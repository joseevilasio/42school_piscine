/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:53:16 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/31 12:41:14 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_strcmp(char *s1, char *s2);
int		ft_isspace(int i, char *str);
void	ft_putstr(char *str);

int	process_key(char *key, int i, char *str)
{
	int	j;

	j = 0;
	while (str[i] != ':')
	{
		key[j] = str[i];
		j++;
		i++;
		i = ft_isspace(i, str);
	}
	key[j] = '\0';
	return (i);
}

int	process_value(char *value, int i, char *str)
{
	int	j;

	j = 0;
	while (str[i] != '\n')
	{
		if (str[i] != ' ')
			value[j++] = str[i];
		i++;
		if (str[i] == '\0')
			break ;
	}
	value[j] = '\0';
	return (i);
}

void	ft_translate(char *str, char *nbr, char *key, char *value)
{
	int	i;

	i = 0;
	i = ft_isspace(i, str);
	while (str[i] != '\0')
	{
		i = ft_isspace(i, str);
		i = process_key(key, i, str);
		i = ft_isspace(i, str);
		i++;
		i = process_value(value, i, str);
		i++;
		if (ft_strcmp(key, nbr) == 0)
		{
			ft_putstr(value);
			write(1, " ", 1);
		}			
	}
}

/*
	int	i; // contador para str e isspace
	int	j; // contador para key, value. A cada while ha reset para 0
No caso de erro na interpretação do dicionário, o programa deve devolver "Dict
Error\n".
◦Se não for possível devolver um dos valores pedidos a partir de um dicionário
dado, o programa deve devolver "Dict Error\n"*/
