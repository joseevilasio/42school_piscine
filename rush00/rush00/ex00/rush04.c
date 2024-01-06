/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 10:55:40 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/17 16:50:14 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int x, char fd_1, char fd_2, char fd_3)
{
	int	line;

	line = 1;
	while (line != (x + 1))
	{
		if (line == 1)
		{
			ft_putchar(fd_1);
		}
		if (line > 1 && line < x)
		{
			ft_putchar(fd_2);
		}
		if (line == x && x != 1)
		{
			ft_putchar(fd_3);
		}
		line++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	start;

	if (x < 0 || y < 0)
	{
		x = 0;
		y = 0;
	}
	start = 3;
	if (y > 0)
	{
		line(x, 'A', 'B', 'C');
	}
	if (y > 2)
	{
		while (start <= y)
		{
			line(x, 'B', ' ', 'B');
			start++;
		}
	}
	if (y > 2)
	{
		line(x, 'C', 'B', 'A');
	}
}
