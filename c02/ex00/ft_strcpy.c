/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:54:17 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/27 13:18:21 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	dest[10];
	char	*src;

	src = "Hello!";
	printf("Source: %s\n", src);
	printf("Dest: %s\n", ft_strcpy(dest, src));
	printf("%s", strcpy(dest, src));
	return (0);
}*/
