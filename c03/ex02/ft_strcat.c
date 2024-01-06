/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:11:15 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 13:33:50 by joneves-         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	index_src;
	int	index_dest;

	index_src = 0;
	index_dest = 0;
	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}
	while (src[index_src] != '\0')
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}
	dest[index_dest] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest_1[17];
	char	*src_1;
	char	dest_2[17];


	src_1 = "Banana Banana";
	ft_strcpy(dest_1, "The best school is mais mais mais");
	ft_strcpy(dest_2, "The best school is mais mais mais");
	printf("Test 1 | ft_strcat -> Dest: %s\n", ft_strcat(dest_1, src_1));
	printf("Test 1 | strcat -> Dest: %s\n", strcat(dest_2, src_1));
	return (0);
}