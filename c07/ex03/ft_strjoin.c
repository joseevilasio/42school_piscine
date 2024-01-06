/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:29:31 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/04 10:28:57 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

int	ft_lenvector(int size, char **strs)
{
	int	i;
	int	len;

	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	return (len);
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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*p_initial;
	char	*str;

	i = 0;	
	str = (char *) malloc((ft_strlen(strs[i]) * size) * sizeof(char) + 1);
	p_initial = str;
	if (size == 0)
	{
		str = (char *) malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		str = str + ft_strlen(strs[i]);
		if (i < (size - 1))
			ft_strcat(str, sep);
		str = str + ft_strlen(sep);
		i++;
	}
	*str = '\0';
	return (p_initial);
}

/*int	main(void)
{
	char	*result;
	char	*strs[3] = {"Hello", "World", "!"};

	result = ft_strjoin(3, strs, " ");
	printf("%s\n", result);
	free(result);

	return (0);
}*/