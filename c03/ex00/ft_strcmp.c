/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 19:56:21 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/30 18:33:40 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}


int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;

	s1 = "helicopter";
	s2 = "hello";
	s3 = "scholl";
	s4 = "scholl";
	printf("Test 1 - %s ft_strcmp -> %d\n", s1, ft_strcmp(s1, s2));
	printf("Test 1 - %s strcmp -> %d\n", s2, strcmp(s1, s2));
	printf("Test 2 - %s ft_strcmp -> %d\n", s3, ft_strcmp(s3, s4));
	printf("Test 2 - %s strcmp -> %d", s4, strcmp(s3, s4));
	return (0);
}