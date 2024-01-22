/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argparser.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:13:30 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/22 19:53:40 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	ft_argparser(int argc, char **argv, int *pt_jump, int *pt_size)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-' && argv[i][1] == 'c' && argv[i][2] == '\0')
		{
			if (ft_setoption_arg(argv, pt_jump, pt_size, i) == -1)
				return (-1);
		}
		else if (argv[i][0] == '-' && argv[i][1] == 'c' && argv[i][2] != '\0')
		{
			if (ft_setoption_str(argv, pt_jump, pt_size, i) == -1)
				return (-1);
		}
		else if (argv[i][0] == '-' && argv[i][1] != 'c')
		{
			ft_msgerror(4, argv[i]);
			return (-1);
		}
		i++;
	}
	return (0);
}
