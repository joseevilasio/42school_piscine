/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pipe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:31:28 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/23 21:25:19 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_putstr_pipe(char *str)
{
	int	i;

	i = 0;
	write(1, " |", 2);
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]) == 1)
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
	write(1, "|", 1);
}
