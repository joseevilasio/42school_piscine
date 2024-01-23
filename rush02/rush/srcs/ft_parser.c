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
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
void	ft_translate(char *str, char *nbr, char *key, char *value);
char	*ft_strcat(char *dest, char c);

/* returns a string with 1 + number of zeroes.
e.g.: "1000000" */
char	*add_10_pow_n(int n)
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
	return (tmp);
}

void	freeall(char *u_, char *d_, char *h_, char *dec_1, char *dec_2)
{
	free(u_);
	free(d_);
	free(h_);
	free(dec_1);
	free(dec_2 );
}

void	strcatall(char *u_, char *d_, char *h_, 
	char *dec_1, char *dec_2, char u, char d, char h)
{
	ft_strcat(u_, u);
	ft_strcat(d_, d);
	ft_strcat(h_, h);
	ft_strcat(dec_1, d);
	ft_strcat(dec_1, u);
	ft_strcat(dec_2, d);
	ft_strcat(dec_2, '0');
}

void	writetranslate(char *trio, char *str, char *key, char *value, char *u_, char *h_, 
	char *dec_1, char *dec_2, char u, char d, char h)
{
	if (ft_strcmp(trio, "100") == 0)
	{
		ft_translate(str, "1", key, value);
		ft_translate(str, "100", key, value);
	}
	else
	{
	if (h != '0')
	{
		ft_translate(str, h_, key, value);
		ft_translate(str, "100", key, value);
	}
	if (d == '1')
		ft_translate(str, dec_1, key, value);
	else if (d != '0')
		ft_translate(str, dec_2, key, value);
	if (u != '0' && d != '1')
		ft_translate(str, u_, key, value);
	}
}
/*
definição: escrever_trio_extenso
A entrada é um número da forma: cdu (as letras representam cada algarismo)
A saída é guardada na variável saída
*/
void write_trio(char *trio, char *str, char *key, char *value)
{
	char	u;
	char	d;
	char	h;
	char *u_;
	char *d_;
	char *h_;
	char *dec_1;
	char *dec_2;

	u_ = malloc(1 * sizeof(char) + 1);
	d_ = malloc(1 * sizeof(char) + 1);
	h_ = malloc(1 * sizeof(char) + 1);
	dec_1 = malloc(2 * sizeof(char) + 1);
	dec_2 = malloc(2 * sizeof(char) + 1);
	u = trio[2];
	d = trio[1];
	h = trio[0];
	strcatall(u_, d_, h_, dec_1, dec_2, u, d, h);
	writetranslate(trio, str, key, value, u_, h_, dec_1, dec_1, u, d, h);
	freeall(u_, d_, h_, dec_1, dec_2);
}

int	insert_trio(char *trio, int i, char *nbr, int rest)
{
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
	return (i);
}

void	parse_trios(char *nbr, int len, char *str, char *key, char *value)
{
	int i;
	char *trio;
	int rest;

	rest = len % 3; // 0, 1 or 2
	i = 0;
	while (i < len)
	{
		trio = malloc(3 * sizeof(char) + 1);
		i = insert_trio(trio, i, nbr, rest);
		trio[3] = '\0';
		write_trio(trio, str, key, value);
		if (len > 3 && i <= (len - 3))
			ft_translate(str, add_10_pow_n(((len - i) / 3) * 3), key, value);
		free(trio);
	}
}
