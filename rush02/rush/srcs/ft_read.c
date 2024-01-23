/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 13:51:32 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/31 11:36:47 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putstr(char *str);

int	ft_read(char *file, char *str, int size)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Dict Error\n");
		return (1);
	}
	read(fd, str, size);
	close(fd);
	return (0);
}

/*Recebe uma string com nome do file a ser lido, uma string 'buffer' devidamente
com memoria	alocada para receber os valores do dict, size: o tamanho dessa
string de 'buffer. 	A funcao modifica a string que ate entao estava vazia com
dados do dict, Se funcionar bem devolve como int '0' se nao devolve int '1'*/
