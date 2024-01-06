/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:16:37 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/19 16:25:02 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_99(int fd_y1, int fd_y2)
{
	int	fd_x1;
	int	fd_x2;

	fd_x1 = '0';
	fd_x2 = '1';
	while (fd_x1 <= '9')
	{
		while (fd_x2 <= '9')
		{
			write(1, &fd_y1, 1);
			write(1, &fd_y2, 1);
			write(1, " ", 1);
			write(1, &fd_x1, 1);
			write(1, &fd_x2, 1);
			if ((fd_y1 + fd_y2 + fd_x1 + fd_x2) <= 226)
				write(1, ", ", 2);
			fd_x2++;
		}
		fd_x1++;
		fd_x2 = '0';
	}
}

void	ft_print_comb2(void)
{
	int	fd_y1;
	int	fd_y2;

	fd_y1 = '0';
	fd_y2 = '0';
	while (fd_y1 <= '9')
	{
		while (fd_y2 <= '8')
		{
			ft_print_99(fd_y1, fd_y2);
			fd_y2++;
		}
		fd_y1++;
		fd_y2 = '0';
	}
}
