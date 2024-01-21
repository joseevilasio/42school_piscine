/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msgerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:43:15 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/21 21:09:05 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_msgerror(int type, char *str)
{
	if (type == 1)
	{
		ft_putstr("\nft_tail: cannot open '");
		ft_putstr(str);
		ft_putstr("' for reading: ");
		ft_putstr(strerror(errno));
	}
	else if (type == 2)
		ft_putstr("ft_tail: option requires an argument -- 'c'");
	else if (type == 3)
	{
		ft_putstr("ft_tail: invalid number of bytes: '");
		ft_putstr(str);
		ft_putstr("'");
	}
	else if (type == 4)
	{
		ft_putstr("ft_tail: invalid option -- '");
		ft_putstr(str);
		ft_putstr("'");
	}
}
