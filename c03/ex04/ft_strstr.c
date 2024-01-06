/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:29:28 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/28 09:02:04 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	check;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			index = 0;
			check = 0;
			while (to_find[index] != '\0')
			{
				if (str[index] != to_find[index])
					check = 1;
				index++;
			}
			if (check == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

/*
int	main(void)
{
	char	*str_1;
	char	*to_find_1;
	char	*str_2;
	char	*to_find_2;

	to_find_1 = "best";
	str_1 = "The best school is 42";
	to_find_2 = "MIT";
	str_2 = "The best school is 42";
	printf("Test 1 - String: %s\n", str_1);
	printf("ft_strstr -> Find: %s\n", ft_strstr(str_1, to_find_1));
	printf("strstr -> Find: %s\n", strstr(str_1, to_find_1));
	printf("Test 2 - String: %s\n", str_2);
	printf("ft_strstr -> Find: %s\n", ft_strstr(str_2, to_find_2));
	printf("strstr -> Find: %s\n", strstr(str_2, to_find_2));
	return (0);
}*/