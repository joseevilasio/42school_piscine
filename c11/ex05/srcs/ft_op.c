/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:43:51 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/31 20:57:31 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	ft_op(int a, int b, char *op, int (*f)(int, int))
{
	if (b == 0 && op[0] == '/')
		ft_putstr("Stop : division by zero");
	else if (b == 0 && op[0] == '%')
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(f(a, b));
}
