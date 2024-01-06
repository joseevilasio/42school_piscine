/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:19:24 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/21 16:15:29 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	other;

	other = *b;
	*b = *a;
	*a = other;
}

/*int	main(int argc, char **argv)
{
	int	*a;
	int	*b;
	int	number_a;
	int	number_b;

	if (argc > 0)
	{
		number_a = *argv[1];
		number_b = *argv[2];
		a = &number_a;
		b = &number_b;
		printf("After swap -> a = %d | b = %d\n", *a, *b);
		ft_swap(a, b);
		printf("Before swap -> a = %d | b = %d\n", *a, *b);
	}
	return (0);
}*/