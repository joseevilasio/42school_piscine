/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:10:21 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/18 12:20:42 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft.h"

int	main(int argc, char *argv[])
{
	char str[1000];
	
	if (argc == 2)
	{
		if (ft_read(argv[1], str, 1000) == 0)
			ft_putstr(str);
		else
			ft_putstr("Cannot read file.\n");
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_putstr("File name missing.\n");
	return (0);
}
