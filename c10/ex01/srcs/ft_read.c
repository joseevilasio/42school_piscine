/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:19:24 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/18 12:20:27 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	ft_read(char *file, char *str, int size)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)	
		return (1);
	read(fd, str, size);
	close(fd);
	return (0);
}
