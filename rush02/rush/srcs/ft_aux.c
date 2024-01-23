/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:45:03 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/31 16:55:40 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		ft_read(char *file, char *str, int size);
char	*ft_translate(char *str, char *nbr, char *key, char *value);
int		ft_checkdict(char *str, char *key, char *value);
void	parse_trios(char *nbr, int len, char *str, char *key, char *value);
int		ft_strlen(char *str);

void	ft_free(char *str, char *key, char *value)
{
	free(str);
	free(key);
	free(value);
}

void	ft_aux(char *filepath, char *nbr)
{
	char	*str;
	char	*key;
	char	*value;
	int		size;

	size = 2000;
	str = (char *) malloc(size * sizeof(char));
	key = (char *) malloc(38 * sizeof(int));
	value = (char *) malloc(38 * sizeof(char));
	if (ft_read(filepath, str, size) == 0)
	{
		if (ft_checkdict(str, key, value) == 0)
			ft_putstr("Dict Error\n");
		else 
		{
			parse_trios(nbr, ft_strlen(nbr), str, key, value);
		}
	}
	ft_free(str, key, value);
}
