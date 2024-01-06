/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:56:21 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/31 12:17:24 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'A' && str[i] <= 'Z') || 
				(str[i] >= 'a' && str[i] <= 'z')) 
			&& ((str[i - 1] < 48 || str[i - 1] > 57)
				&& (str[i - 1] < 'A'
					|| str[i - 1] > 'Z') && (str[i - 1] < 'a'
					|| str[i - 1] > 'z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
