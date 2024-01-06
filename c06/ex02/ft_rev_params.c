/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:04:58 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 14:48:47 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 0)
	{
		i = (argc - 1);
		while (i > 0)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i--;
		}
	}
}
