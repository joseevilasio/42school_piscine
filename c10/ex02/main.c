/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:25:03 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/22 19:03:09 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft.h"

int	main(int argc, char *argv[])
{
	int	*pt_jump;
	int	*pt_size;

	pt_jump = (int *) malloc(sizeof(int));
	pt_size = (int *) malloc(sizeof(int));
	if (argc > 1 && pt_jump != NULL && pt_size != NULL)
	{
		if (ft_argparser(argc, argv, pt_jump, pt_size) == 0)
		{
			ft_tail(argc, argv, pt_jump, pt_size);
		}
	}
	free(pt_jump);
	free(pt_size);
	return (0);
}

// Resolver str is numeric, para aceitar espacos e apenas um sinal de positivo
// lidar com numeros negativos, ou seja nao imprimir nada
// refactorar para ter 25 as funcoes
