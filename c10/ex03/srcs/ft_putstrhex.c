/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrhex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:51:23 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/24 21:17:18 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putstrhex(char *str, int *option)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*option == 1)
		{
			if (i == 0 || i == 8)
				ft_putstr(" ");
			ft_putstr(" ");
		}
		if ((i == 0 || (i % 2) == 0) && *option != 1)
			ft_putstr(" ");
		if (*str >= 0 && *str <= 15)
			ft_putstr("0");
		ft_print_hex(*str);			
		str++;
		i++;
	}
	ft_putstr(" ");
	i--;
	if (i < 8 && *option == 1)
		ft_putnchar(' ', 47 - (i * 3));
	else if (i < 15 && *option == 1)
		ft_putnchar(' ', 46 - (i * 3));
} 

