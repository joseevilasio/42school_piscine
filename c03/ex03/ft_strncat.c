/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:11:15 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/28 09:01:37 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index_src;
	unsigned int	index_dest;

	index_src = 0;
	index_dest = 0;
	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}
	while (src[index_src] != '\0' && index_src < nb)
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}
	dest[index_dest] = '\0';
	return (dest);
}

/*int	main(void)
{
	char			dest_1[50];
	char			dest_2[50];
	char			*src_1;
	unsigned int	nb;

	src_1 = "42";
	nb = 1;
	ft_strcpy(dest_1, "The best school is 42");
	ft_strcpy(dest_2, "The best school is ");
	printf("Test 1 ft_strncat -> Dest: %s\n", ft_strncat(dest_1, src_1, nb));
	printf("Test 1 strncat -> Dest: %s\n", strncat(dest_2, src_1, nb));
	return (0);
}*/