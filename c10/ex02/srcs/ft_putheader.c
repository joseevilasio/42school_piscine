/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putheader.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:36:42 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/21 21:41:03 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putheader(char *str)
{
	ft_putstr("\n==> ");
	ft_putstr(str);
	ft_putstr(" <==\n");
}
