/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 19:50:11 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/24 20:04:04 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putnchar(char c, int n)
{
	int	i;

	i = 1;
	while (i != n)
	{
		write(1, &c, 1);
		i++;
	}
}