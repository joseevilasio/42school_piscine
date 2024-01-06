/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:54:17 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/26 15:28:42 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0 && dest != (void *)0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
int	main(void)
{
	char	dest[10];
	char	*src;

	src = "Hello Fellas";
	printf("Source: %s\n", src);
	printf("ft_strlcpy -> Dest: %d\n", ft_strlcpy(dest, src, sizeof(dest)));
	printf("strlcpy -> Dest: %zu\n", strlcpy(dest, src, sizeof(dest)));
	return (0);
}*/