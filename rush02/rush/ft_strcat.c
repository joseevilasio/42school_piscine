/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:11:15 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/26 17:09:33 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char c)
{
	int	index_dest;

	index_dest = 0;
	while (dest[index_dest] != '\0')
	{
		index_dest++;
	}
	dest[index_dest] = c;
	index_dest++;
	dest[index_dest] = '\0';
	return (dest);
}
