/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:00:17 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/17 13:53:15 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int num)
{
	const char	n = 'N';
	const char	p = 'P';

	if (num >= 0)
	{
		write(1, &p, 1);
	}
	else
	{
		write(1, &n, 1);
	}
}
