/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:56:21 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/27 13:19:41 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	char	*str_1;
	char	*str_2;
	char	*str_3;

	str_1  = "";
	str_2  = "abcd";
	str_3  = "ABCD";
	printf("Return str_1 '%s' is equal -> %d\n", str_1, ft_str_is_uppercase(str_1));
	printf("Return str_2 '%s' is equal -> %d\n", str_2, ft_str_is_uppercase(str_2));
	printf("Return str_3 '%s' is equal -> %d\n", str_3, ft_str_is_uppercase(str_3));
	return (0);
}*/
