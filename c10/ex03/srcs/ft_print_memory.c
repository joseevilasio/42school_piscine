/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:24:20 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/29 21:25:48 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_print_memory(int	i)
{
	int	n;

	n = 10 * i;
	ft_print_hex(n);
	// ft_putstr(" ");
}
