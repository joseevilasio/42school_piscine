/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:08:55 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/03 16:16:37 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	char	i;

	i = '9';
	while (i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
}

int	main(void)
{
	ft_countdown();
	return (0);
}