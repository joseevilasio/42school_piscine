/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dump.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:31:28 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/29 21:26:22 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_dump(char *str, int *option)
{
	char	*copy;
	int		i;

	i = 0;
	while (*str != '\0')
	{
		copy = ft_strndup(str, 16);
		ft_print_memory(i);
		ft_putstrhex(copy, option);
		if (*option == 1)
			ft_putstr_pipe(copy);
		ft_putstr("\n");
		str = str + 16;
		free(copy);
		i++;
	}
}
 