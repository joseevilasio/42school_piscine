/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:58:33 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/23 14:42:50 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

char	*ft_strndup(char *src, unsigned int size)
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *) malloc(size * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	while (src[i] != '\0' && i < size)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
