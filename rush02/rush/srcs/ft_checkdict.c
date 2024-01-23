/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:53:16 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/31 16:56:24 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);
int		ft_isspace(int i, char *str);
int		ft_str_is_printable(char *str);
int		ft_str_is_numeric(char *str);
void	ft_putstr(char *str);

int	process_key_check(char *key, int i, char *str)
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

int	process_value_check(char *value, int i, char *str)
{
	int	j;

	j = 0;
	while (str[i] != '\n')
	{
		if (str[i] != ' ')
		{
			value[j] = str[i];
			j++;
		}
		i++;
		if (str[i] == '\0')
			break ;
	}
	value[j] = '\0';
	return (i);
}

int	ft_checkdict(char *str, char *key, char *value)
{
	int	i;

	i = ft_isspace(0, str);
	while (str[i] != '\0')
	{
		i = ft_isspace(i, str);
		i = process_key_check(key, i, str);
		if (ft_str_is_numeric(key) == 0)
			return (0);
		i = ft_isspace(i, str);
		i++;
		i = process_value_check(value, i, str);
		if (ft_str_is_printable(value) == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
	int	i; // contador para str e isspace
	int	j; // contador para key, value. A cada while ha reset para 0
No caso de erro na interpretação do dicionário, o programa deve devolver "Dict
Error\n".
◦Se não for possível devolver um dos valores pedidos a partir de um dicionário
dado, o programa deve devolver "Dict Error\n"*/
