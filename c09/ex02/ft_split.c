/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:48:45 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/16 21:56:14 by josejunior       ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	check;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			index = 0;
			check = 0;
			while (to_find[index] != '\0')
			{
				if (str[index] != to_find[index])
					check = 1;
				index++;
			}
			if (check == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

int	ft_splitlen(char *str, char *charset)
{
	int	len;
	
	len = 1;
	while (*str != '\0')
	{
		if (ft_strstr(str, charset) != 0 && *ft_strstr(str, charset) != '\0')
		{
			str = ft_strstr(str, charset) + ft_strlen(charset);
			len++;
		}
		else
		{
			str++;
			if (len < 2)
				return (0);
		}
	}
	return (len);
}

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

char	**ft_split(char *str, char *charset)
{
	int	splitlen;
	unsigned int	size;
	int	i;
	char **strings;
	
	if (*charset == '\0')
		splitlen = 0;
	else
		splitlen = ft_splitlen(str, charset);
	strings = (char **) malloc(splitlen * sizeof(char) + 1);
	i = 0;
	while (i < splitlen && *str != '\0' )
	{
		if (ft_strstr(str, charset) == 0)
			size = ft_strlen(str);
		else
			size = ft_strlen(str) - ft_strlen(ft_strstr(str, charset));
		if (size > 0)
		{
			strings[i] = (char *) malloc(size * sizeof(char) + 1);
			ft_strncpy(strings[i], str, size);
			i++;
		}
		if (ft_strstr(str, charset) != 0)
			str = ft_strstr(str, charset) + ft_strlen(charset);
		else
			str++;
	}
	strings[i] = 0;
	return (strings);
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
