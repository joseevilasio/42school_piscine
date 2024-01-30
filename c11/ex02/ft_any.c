/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josejunior <josejunior@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:19:25 by josejunior        #+#    #+#             */
/*   Updated: 2024/01/30 21:12:21 by josejunior       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_any(char **tab, int(*f)(char*))
{
	while (*tab != 0)
	{
		if (f(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}

int	main(void)
{
	char *tab[6]= {"banana", "BISCOITO", "vitamina", "leite"};

	if (ft_any(tab, &ft_str_is_uppercase) == 1)
		printf("Return 1");
	else if (ft_any(tab, &ft_str_is_uppercase) == 0)
		printf("Return 0");
	else
		printf("Error!");
	return (0);
}
