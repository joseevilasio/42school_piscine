/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 12:55:28 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 14:38:27 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		write(1, "147483648", 9);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	int	i = -2147483648;

	ft_putnbr(i);
	return (0);
}