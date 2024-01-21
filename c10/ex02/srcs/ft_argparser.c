/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argparser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:13:30 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/21 21:08:40 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	ft_argparser(int argc, char **argv, int *pt_jump, int *pt_size)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
		{
			if(argv[i][1] == 'c' && argv[i][2] == '\0')
			{
				if ((argv[i + 1] != NULL) && ft_str_is_numeric(argv[i + 1]) == 1)
				{
					*pt_size = ft_atoi(argv[i + 1]);
					*pt_jump = i;
					pt_jump++;
					*pt_jump = i + 1;
					pt_jump++;
				}
				else
				{
					if ((argv[i + 1] == NULL))
						ft_msgerror(2, argv[i + 1]);
					else
						ft_msgerror(3, argv[i + 1]);
					return (-1);
				}
			}
			else if (argv[i][1] == 'c' && argv[i][2] != '\0')
			{
				argv[i] = argv[i] + 2;
				if (ft_str_is_numeric(argv[i]) == 1)
				{
					*pt_size = ft_atoi(argv[i]);
					*pt_jump = i;
					pt_jump++;
				}
				else
				{
					ft_msgerror(3, argv[i]);
					return (-1);
				}
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
