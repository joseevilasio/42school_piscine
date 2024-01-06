/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:03:26 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/21 16:16:21 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	module;

	division = *a / *b;
	module = *a % *b;
	*a = division;
	*b = module;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	printf("After execute function -> a = %d | b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Before execute function -> a = %d | b = %d\n", a, b);
	return (0);
}*/