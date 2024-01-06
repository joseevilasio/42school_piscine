/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:16:23 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/25 16:41:37 by joneves-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

char	*ft_check(char *base)
{
	char	*decimal;
	char	*binary;
	char	*hexa;
	char	*octal;
	char	*p;

	decimal = "0123456789";
	binary = "01";
	hexa = "0123456789ABCDEF";
	octal = "poneyvif";
	if (ft_strlen(base) == 10)
		p = decimal;
	else if (ft_strlen(base) == 2)
		p = binary;
	else if (ft_strlen(base) == 16)
		p = hexa;
	else if (ft_strlen(base) == 8)
		p = octal;
	else
		return (NULL);
	if (ft_strcmp(p, base) != 0)
		return (NULL);
	return (p);
}

void	ft_convert(char *num, int nbr, int base)
{
	int	modulo;
	
	if (base == 16)
	{
		while (nbr > 0) 
		{
			modulo = nbr % 16;
			if (modulo < 10)
				*num = modulo + '0';
			else
				*num = modulo - 10 + 'A';
			nbr = nbr / 16;
			num++;
		}
	}
	while (nbr > 0) 
	{
		*num = '0' + nbr % base;
		nbr = nbr / base;
		num++;
	}		
	*num= '\0';
}

int	ft_atoi_base(char *nbr, char *base)
{
	char	num[32];
	char	*pnum;
    int     result;

	pnum = num;
	result = 0;
	if (nbr == NULL || *nbr == 0)
		return (0);
	else if (ft_check(base) == NULL)
		return (0);
	while (*nbr >= '0' && *nbr <= '9') 
	{
		result = result * 10 + (*nbr - '0');
		nbr++;
	}
	ft_convert(pnum, result, ft_strlen(ft_check(base))); 
	result = 0;
	pnum = ft_strlen(num) + pnum;
	while (pnum > num)
	{
		pnum--;
		result = result * 10 + (*pnum - '0');		
	}
	if (nbr[0] == '-')
		result = result * -1;
	return (result);
}

int	main(void)
{
	char 	*nbr;
	char	*decimal;
	char	*binary;
	char	*hexa;
	char	*octal;

	decimal = "0123456789";
	binary = "01";
	hexa = "0123456789ABCDEF";
	octal = "poneyvif";
	nbr = "-42";
	printf("Binary -> %d\n", ft_atoi_base(nbr, binary));
	printf("Hexadecimal -> %d\n", ft_atoi_base(nbr, hexa));
	printf("Decimal -> %d\n", ft_atoi_base(nbr, decimal));
	printf("Octal -> %d\n", ft_atoi_base(nbr, octal));
	return (0);
}
