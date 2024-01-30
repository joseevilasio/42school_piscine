/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:41:39 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/30 20:10:14 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		ft_putchar(' ');
		i++;
	}
}

int	ft_sum10(int a)
{
	int	b;

	b = a + 10;
	return (b);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new_tab;

	i = 0;
	new_tab = (int *) malloc(length * sizeof(int));
	if (new_tab == NULL)
		return (0);
	while (i < length)
	{
		new_tab[i] = f(tab[i]);
		i++;
	}
	return (new_tab);
}

int	main(void)
{
	int tab[6]= {23, 12, 12, 1, 4, 9};
	int length;

	length = 6;
	ft_foreach(tab, length, &ft_putnbr);
	ft_putchar('\n');
	ft_foreach(ft_map(tab, length, &ft_sum10), length, &ft_putnbr);
	return (0);
}
