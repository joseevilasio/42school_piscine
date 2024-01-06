/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:56:52 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/19 16:25:38 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	field_1;
	int	field_2;
	int	field_3;

	field_1 = '0';
	while (field_1 <= '7')
	{
		field_2 = field_1 + 1;
		while (field_2 <= '8')
		{
			field_3 = field_2 + 1;
			while (field_3 <= '9')
			{
				write(1, &field_1, 1);
				write(1, &field_2, 1);
				write(1, &field_3, 1);
				if (field_1 <= '6')
					write(1, ", ", 2);
				field_3++;
			}
			field_2++;
		}
		field_1++;
	}
}
