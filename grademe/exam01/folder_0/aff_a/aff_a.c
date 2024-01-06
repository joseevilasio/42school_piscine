/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:58:52 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/03 16:06:17 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			write(1, "a", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		putchar(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
