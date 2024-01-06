/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:56:21 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/27 13:19:11 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int	main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[1]);
		printf("%s", ft_strlowcase(argv[1]));
	}
	return (0);
}*/
