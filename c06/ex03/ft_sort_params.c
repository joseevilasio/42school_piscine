/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 18:04:58 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/02 18:18:35 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_str_tab(char **str, int n)
{
	int		k;
	int		j;
	char	*swap;

	k = 0;
	while (k < n - 1)
	{
		j = 0;
		while (j < n - k - 1)
		{
			if (ft_strcmp(str[j], str[j + 1]) > ft_strcmp(str[j + 1], str[j]))
			{
				swap = str[j];
				str[j] = str[j + 1];
				str[j + 1] = swap;
			}
			j++;
		}
		k++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;

	i = 1;
	argv[0] = "\0";
	if (argc > 0)
	{
		ft_sort_str_tab(argv, argc);
	}
	while (i != argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i++;
	}
	return (0);
}
