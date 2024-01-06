/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:03:26 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/21 16:16:01 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division;
	int	module;

	division = a / b;
	module = a % b;
	*div = division;
	*mod = module;
}

/*int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(10, 2, &div, &mod);
	printf("Div -> %d | Mod -> %d\n", div, mod);
	return (0);
}*/