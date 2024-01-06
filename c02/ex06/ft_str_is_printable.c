/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:56:21 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/27 13:17:30 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str_1;
	char	*str_2;
	char	*str_3;

	str_1 = "";
	str_2 = "abcA#$@09d";
	str_3 = "\t";
	printf("Return str_1 '%s' is equal -> %d\n", str_1, ft_str_is_printable(str_1));
	printf("Return str_2 '%s' is equal -> %d\n", str_2, ft_str_is_printable(str_2));
	printf("Return str_3 '%s' is equal -> %d\n", str_3, ft_str_is_printable(str_3));
	return (0);
}*/