/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_control.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 20:53:39 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/23 19:29:52 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_control(int argc, char **argv, int *pt_jump, int *option)
{
	int		i;
	char	*str;

	i = 1;
	while (i < argc)
	{
		if (ft_jump(i, pt_jump) == 0)
		{
			str = ft_read(argv[i]);
			if (str != NULL)
			{
				ft_dump(str, option);
				free(str);
			}
			else
				ft_msgerror(1, argv[i]);
		}
		i++;
	}
}
