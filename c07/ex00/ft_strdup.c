/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:58:33 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 21:06:35 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) malloc(ft_strlen(src) * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char	*src;

	src = "Tomas de Aquino";
	printf("%s", ft_strdup(src));
	free(ft_strdup(src));
	printf("%s", strdup(src));
	return (0);
}*/