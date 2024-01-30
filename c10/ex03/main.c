/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:25:03 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/23 19:29:59 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft.h"

int	main(int argc, char *argv[])
{
	int	*pt_jump;
	int	*option;

	pt_jump = (int *) malloc(sizeof(int));
	option = (int *) malloc(sizeof(int));
	if (argc > 1 && pt_jump != NULL && option != NULL)
	{
		if (ft_argparser(argc, argv, pt_jump, option) == 0)
		{
			ft_control(argc, argv, pt_jump, option);
		}
	}
	free(pt_jump);
	free(option);
	return (0);
}
