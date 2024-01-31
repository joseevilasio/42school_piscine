/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:25:03 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/31 20:55:18 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft.h"

int	main(int argc, char *argv[])
{
	int		(*ft[5])(int, int);
	char	*op;
	int		i;

	ft[0] = ft_sum;
	ft[1] = ft_sub;
	ft[2] = ft_div;
	ft[3] = ft_mult;
	ft[4] = ft_mod;
	op = "+-/*%";
	i = 0;
	if (argc == 4)
	{
		while (i < 4)
		{
			if (argv[2][0] == op[i])
			{
				ft_op(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2], ft[i]);
				return (0);
			}
			i++;
		}
		ft_putstr("0");
	}
	return (0);
}
