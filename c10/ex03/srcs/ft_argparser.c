/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argparser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:13:30 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/23 16:41:38 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	ft_argparser(int argc, char **argv, int *pt_jump, int *option)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
		{
			if (argv[i][1] == 'C' && argv[i][2] == '\0')
			{
				*option = 1;
				*pt_jump = i;
				pt_jump++;
			}
			else
			{
				ft_msgerror(4, argv[i]);
				return (-1);
			}
		}
		i++;
	}
	*pt_jump = 0;
	return (0);
}
