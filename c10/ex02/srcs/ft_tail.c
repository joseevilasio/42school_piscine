/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:53:39 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/22 18:51:05 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_tail(int argc, char **argv, int *pt_jump, int *pt_size)
{
	int		i;
	int		a;
	char	*str;

	i = 1;
	a = 0;
	while (i < argc)
	{
		if (ft_jump(i, pt_jump) == 0)
		{
			str = ft_read(argv[i]);
			if (str != NULL)
			{
				if ((argc - (1 + ft_arraylen(pt_jump))) > 1)
					ft_putheader(argv[i], a);
				ft_putstr_tail(str, pt_size);
				free(str);
				a++;
			}
			else
				ft_msgerror(1, argv[i]);
		}
		i++;
	}
}
