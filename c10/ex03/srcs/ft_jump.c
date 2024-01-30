/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_jump.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:00:51 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/21 20:46:14 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_jump(int i, int *pt_jump)
{
	int	index;

	index = 0;
	while (pt_jump[index] != 0)
	{
		if (i == pt_jump[index])
			return (1);
		index++;
	}
	return (0);
}
