/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putheader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:36:42 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/22 18:51:45 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putheader(char *str, int index)
{
	if (index == 0)
		ft_putstr("==> ");
	else
		ft_putstr("\n==> ");
	ft_putstr(str);
	ft_putstr(" <==\n");
}
