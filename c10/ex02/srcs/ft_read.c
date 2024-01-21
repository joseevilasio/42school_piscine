/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:19:24 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/21 21:13:02 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

char	*ft_read(char *file)
{
	int		fd;
	char	*str;
	ssize_t	bytes_read;

	fd = open(file, O_RDONLY);
	if (fd > 0)
	{
		str = (char *) malloc(SIZE * sizeof(char));
		if (str != NULL)
		{
			bytes_read = read(fd, str, SIZE);
			if (bytes_read >= 0)
			{
				close(fd);
				str[bytes_read] = '\0';
				return (str);
			}
			free(str);
		}
	}
	close(fd);
	return (NULL);
}
