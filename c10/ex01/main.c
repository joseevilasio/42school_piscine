/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:25:03 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/18 20:15:46 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft.h"
#include <string.h>
#include <errno.h>

int	main(int argc, char *argv[])
{
	char str[30720];
	int	i;
	
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (ft_read(argv[i], str, 30720) == 0)
				ft_putstr(str);
			else
			{
				ft_putstr("ft_cat: ");
				ft_putstr(argv[i]);
				ft_putstr(": ");
				ft_putstr(strerror(errno));
			}
			i++;
		}
	}
	return (0);
}
