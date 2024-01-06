/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:56:21 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/28 09:01:18 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	unsigned int	n;

	s1 = "helicopter";
	s2 = "hello";
	n = 3;
	s3 = "scholl";
	s4 = "scholl";
	printf("Test 1 - %s ft_strncmp -> %d\n", s1, ft_strncmp(s1, s2, n));
	printf("Test 1 - %s strncmp -> %d\n", s2, strncmp(s1, s2, n));
	printf("Test 2 - %s ft_strncmp -> %d\n", s3, ft_strncmp(s3, s4, n));
	printf("Test 2 - %s strncmp -> %d", s4, strncmp(s3, s4, n));
	return (0);
}*/