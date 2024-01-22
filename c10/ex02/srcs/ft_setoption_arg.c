/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setoption_arg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:20:03 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/22 19:52:52 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	ft_setoption_arg(char **argv, int *pt_jump, int *pt_size, int i)
{
	if ((argv[i + 1] != NULL) && ft_str_is_numeric(argv[i + 1]) == 1)
	{
		*pt_size = ft_atoi(argv[i + 1]);
		*pt_jump = i;
		pt_jump++;
		*pt_jump = i + 1;
		pt_jump++;
		*pt_jump = 0;
	}
	else
	{
		if ((argv[i + 1] == NULL))
			ft_msgerror(2, argv[i + 1]);
		else
			ft_msgerror(3, argv[i + 1]);
		return (-1);
	}
	return (0);
}
