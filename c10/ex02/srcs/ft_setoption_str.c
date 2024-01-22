/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setoption_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 19:20:03 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/22 19:53:04 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

int	ft_setoption_str(char **argv, int *pt_jump, int *pt_size, int i)
{
	argv[i] = argv[i] + 2;
	if (ft_str_is_numeric(argv[i]) == 1)
	{
		*pt_size = ft_atoi(argv[i]);
		*pt_jump = i;
		pt_jump++;
		*pt_jump = 0;
	}
	else
	{
		ft_msgerror(3, argv[i]);
		return (-1);
	}
	return (0);
}
