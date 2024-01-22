/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:31:28 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/22 18:52:24 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putnstr(char *str, int *pt_size)
{
	int	start;

	if (ft_strlen(str) <= *pt_size)
		ft_putstr(str);
	else
	{
		start = ft_strlen(str) - *pt_size;
		str = str + start;
		ft_putstr(str);
	}
}
