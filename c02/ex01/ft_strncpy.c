/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 18:54:17 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/27 13:18:28 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	dest_1[] = "vitamina de banana";
	char	dest_2[] = "vitamina de banana";
	char	*src;

	src = "Hello!";
	printf("Source: %s\n", src);
	ft_strncpy(dest_1, src, 7);
	strncpy(dest_2, src, 7);
	printf("ft_strncpy -> Dest: %s - Size: %zu\n", dest_1, sizeof(dest_1));
	printf("strncpy -> Dest: %s - Size: %zu\n", dest_2, sizeof(dest_2));
	return (0);
}*/