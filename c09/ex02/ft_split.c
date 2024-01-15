/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:48:45 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/15 21:55:43 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

char	**ft_split(char *str, char *charset)
{
    
}

int	main(int argc, char *argv[])
{
	char **strings;
	int i;

	i = 0;
	if (argc == 3)
	{
		strings = ft_split(argv[1], argv[2]);
		while (strings[i] != 0)
		{
			printf("%s\n", strings[i]);
			i++;
		}		
	}
	return (0);
}
