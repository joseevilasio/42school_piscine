/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joneves- < joneves-@student.42porto.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:16:23 by joneves-          #+#    #+#             */
/*   Updated: 2023/12/28 16:55:37 by joneves-         ###   ########.fr       */
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

int	ft_check(char *base)
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
		return (0);
	if (ft_strcmp(p, base) != 0)
		return (0);
	return (ft_strlen(base));
}

// void	ft_convert(char *num, int nbr, int base)
// {
// 	int	modulo;
	
// 	if (base == 16)
// 	{
// 		while (nbr > 0) 
// 		{
// 			modulo = nbr % 16;
// 			if (modulo < 10)
// 				*num = modulo + '0';
// 			else
// 				*num = modulo - 10 + 'A';
// 			nbr = nbr / 16;
// 			num++;
// 		}
// 	}
// 	while (nbr > 0) 
// 	{
// 		*num = '0' + nbr % base;
// 		nbr = nbr / base;
// 		num++;
// 	}		
// 	*num= '\0';
// }

void	ft_putnbr_base(int nbr, char *base)
{
	int		div;
	int		base_len;
	char	c;

	base_len = ft_check(base);
	div = 1;
	if (base_len > 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		while ((nbr / div) >= 9)
			div = div * 10;
		div = base_len;
		while (div != 0)
		{
			c = '0' + (nbr / div);
			write(1, &c, 1);
			nbr = nbr % div;
			div = div / base_len;
		}
	}
}

int	main(void)
{
	int		nbr;
	char	*decimal;
	char	*binary;
	char	*hexa;
	char	*octal;

	decimal = "0123456789";
	binary = "01";
	hexa = "0123456789ABCDEF";
	octal = "poneyvif";
	nbr = 856;
	printf(" : Binary");
	ft_putnbr_base(nbr, binary);
	printf("\n");
	printf(" : Decimal");
	ft_putnbr_base(nbr, decimal);
	printf("\n");
	printf(" : Hexadecimal");
	ft_putnbr_base(nbr, hexa);
	printf("\n");
	printf(" : Octal");
	ft_putnbr_base(nbr, octal);
	return (0);
}
