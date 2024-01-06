/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:59:07 by joneves-          #+#    #+#             */
/*   Updated: 2024/01/03 17:04:48 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char	*s1 = (char *) malloc(10 * sizeof(char));
	char	*s2 = "Outra!";
	
	ft_strcpy(s1, s2);
	printf("%s", s1);
	return (0);
}	