/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:25:03 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/21 21:51:53 by josejunior       ###   ########.fr       */
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
// quando repassado em -c size apresentar size em read
// bytes e um caracter, entao fazer a mesma logica da linhas porem para caracter;
// refactorar para ter 25 as funcoes
