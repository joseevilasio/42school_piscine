/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:31:49 by bschwell          #+#    #+#             */
/*   Updated: 2023/12/31 17:12:48 by bschwell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 || *s2 != 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}


// can be ignored, just for testing - prints an array
void	print_arr(char **digits, int num_digits)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i > num_digits)
	{
		while (j < ft_strlen(digits[i]))
		{
			printf("digits[%d][%d]: %c\n", i,j,digits[i][j]);
			j++;	
		}
		i++;
	}
}

// calculates the number of strings that needs to be in the main array.
// IGNORE THIS FUNCTION
/*
int	size_calc(char *nbr, int len)
{
	int	total;
	int	i;
	int	pos;

	total = 0;
	i = len - 1;
	pos = 1;

	if (ft_strcmp(nbr, "0") == 0)
		return (1);
	while (i >= 0)
	{
		if (pos == 1)
		{
			if (nbr[i] != '0')
				total++;
			if (len > 3 && i != (len - 1))
				if ((nbr[i + 1] != '0' || nbr[i + 2] != '0' || nbr[i + 3] != '0') || (i == len - 4))
					total++;
		}
		if (pos == 2)
		{
			if ((nbr[i] == '1' && nbr[i + 1] == '0'))
				total++;
			if (nbr[i] != '0' && nbr[i] != '1')
				total++;
		}
		if (pos == 3)
			if (nbr[i] != '0')
				total += 2;
		pos++;
		if (pos == 4)
			pos = 1;
		i--;
	}
	return (total);
}
*/
/* returns a string with 1 + number of zeroes.
e.g.: "1000000" */
char *add_10_pow_n(int n)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = malloc(n * sizeof(char) + 1);
	while (i <= n)
	{
		if (i == 0)
			tmp[i] = '1';
		else
			tmp[i] = '0';
		i++;
	}
	tmp[i] = '\0';
	return tmp;
}

/*
Reads through string and creates substrings that
later will be used in the dictionary parser
*/
// IGNORE THIS FUNCTION
/*
char	**parse_number(char *nbr, int len)
{
	int		i;
	int		c;
	int		n;
	char	**digits;
	
	i = 0;
	c = 0;
	n = 0;
	
	// allocate the number of pointers
	that will be used to translate the digits

	digits = malloc(size_calc(nbr, len) * sizeof(char *));
	while (i < len)
	{
		///////////////////////////////
		in this loop we will loop through packs of 3 numbers,
		and take different decisions based if we're on:
		pos 1 (units)
		pos 2 (decimals)
		pos 3 (hundreds)
		///////////////////////////////
		if ((len - 1) % 3 == 1) // pos 1 
		{
			c++; // walk to the next pointer;
			if (nbr[i] != '0') // if curr_digit is not zero 
			{
				if (i == 0) // if this digit is the first, we actually want c to target the first pointer 
					c--;
				// allocate 2 bytes (one for the digit, one for the null), and populate them 
				digits[c] = malloc(1 * sizeof(char) + 1);
				digits[c][0] = nbr[i];
				digits[c][1] = '\0';
			}
			if (len > 3 && i != (len - 1))
				// if len > 3 means that this number is higher than 1000, and this is not the last digit. //
			{
				if (i < 3)
				{
					digits[c] = malloc(38 * sizeof(char));
					digits[c] = add_10_pow_n(len - i - 1);
				}
				else if (nbr[i] != '0' || nbr[i - 1] != '0' || nbr[i - 2] != '0')
				{
					digits[c] = malloc(38 * sizeof(char));
					digits[c] = add_10_pow_n(len - i - 1);
				}
			}
		}
		if ((len - 1) % 3 == 2) // pos 2
		{
			if (nbr[i] != '0')
			{
				c++;
				digits[c] = malloc(38 * sizeof(char));
				if (nbr[i] != '1')
				{
					digits[c][0] = nbr[i];
					digits[c][1] = '0';
				} else {
					digits[c][0] = nbr[i];
					digits[c][1] = nbr[i + 1];
				}
			}
		}	
		if ((len - 1) % 3 == 0) // pos 3
		{
			if (nbr[i] != '0')
			{
				c++;
				digits[c] = malloc(38 * sizeof(char));
				digits[c][0] = nbr[i];
				digits[c][1] = '0';
				c++;
				digits[c] = add_10_pow_n(2);
			}
		}
		i++;
	}
	return (digits);
}
*/
/*
definição: escrever_trio_extenso
A entrada é um número da forma: cdu (as letras representam cada algarismo)
A saída é guardada na variável saída
*/
void write_trio(char *trio)
{
	// int u, d, h;
	char u = trio[2];
	char d = trio[1];
	char h = trio[0];
	if (ft_strcmp(trio, "100") == 0)
	{
		printf("store in array: \"1\"\n");
		printf("store in array: \"100\"\n");
	}
	else
	{
		if (h != '0')
		{
			printf("store in array: \"%c\"\n", h);
			printf("store in array: \"100\"\n");
		}
		if (d == '1')
			printf("store in array: \"%c%c\"\n", d, u);
		else if (d != '0')
		{
			printf("store in array: \"%c0\"\n", d);
		}
		if (u != '0' && d != '1')
			printf("store in array: \"%c\"\n", u);
	}
}

void    parse_trios(char *nbr, int len)
{
    // int  i = len - 1;
    int i = 0;
    char *trio;
    int rest = len % 3; // 0, 1 or 2
    while (i < len)
    {
        trio = malloc(3 * sizeof(char) + 1);
        if (rest == 1 && i == 0)
        {
            trio[0] = '0';
            trio[1] = '0';
            trio[2] = nbr[i];
			i++;
        }
        else if (rest == 2 && i == 0)
        {
            trio[0] = '0';
            trio[1] = nbr[i];
            trio[2] = nbr[i + 1];
            i+=2;
        }
        else
        {
            trio[0] = nbr[i];
            trio[1] = nbr[i + 1];
            trio[2] = nbr[i + 2];
			i += 3;
        }
        trio[3] = '\0';
        //printf("trio: %s\n", trio);
		write_trio(trio);
		if (len > 3 && i <= (len - 3))
		{
			printf("store in array: \"%s\"\n", add_10_pow_n(((len - i) / 3) * 3));
        }
		free(trio);
    }
}

int main(int argc, char **argv)
{
	// char	*nbr = "5123";
	// char	**digits;
	// int		num_digits;

	(void) argc;
	(void) argv;

	// num_digits = ft_strlen(nbr); 
	// digits = parse_number(nbr, num_digits);
	// print_arr(digits, num_digits);

	//printf("%d", size_calc(nbr, ft_strlen(nbr)));

	// free (digits);
	parse_trios(argv[1], ft_strlen(argv[1]));
	//parse_number1(argv[1], ft_strlen(argv[1]));
}
