/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:11:15 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 13:35:27 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index_src;
	unsigned int	index_dest;
	unsigned int	i;

	index_src = 0;
	index_dest = 0;
	i = 0;
	
	while (src[index_src] != '\0') //len copia
		index_src++;
		
	while (dest[index_dest] != '\0') //len destino caractere
		index_dest++;
		
	if (size <= index_dest)
		return (size + index_src);
		
	while (src[i] != '\0' && (index_dest + i) < (size - 1))
	{
		dest[index_dest + i] = src[i];
		i++;
	}
	
	dest[index_dest + i] = '\0';
	
	return (index_dest + index_src);
}

int	main(void)
{
	char a[10] = "abc", b[4] = "123", c[10] = "abc";
		printf("%s\n%s\n", a, b);
	unsigned int i = ft_strlcat(a, b, 2);
	unsigned int x = strlcat(c, b,2);
	printf("%u -- %u\n", i, x);
	printf("%s\n%s\n%s\n", a, b, c);
	return (0);
}