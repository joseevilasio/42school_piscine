/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:31:28 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/22 19:16:16 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putstr_tail(char *str, int *pt_size)
{
	int		lines;
	char	*pt_initial;

	lines = 0;
	pt_initial = str;
	if (*pt_size != 0)
		ft_putnstr(str, pt_size);
	else if (ft_countline(pt_initial) > 10)
	{
		while (*str != '\0')
		{
			if (*str == '\n')
				lines++;
			if (lines == ft_countline(pt_initial) - 10)
			{
				str++;
				break ;
			}
			str++;
		}
		ft_putstr(str);
	}
	else
		ft_putstr(str);
}
