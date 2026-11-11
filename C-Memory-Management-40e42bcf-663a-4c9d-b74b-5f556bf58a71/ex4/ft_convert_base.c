/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 14:12:47 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/12 15:04:31 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>

void	reverse_number(char *tab, int size);
int		length_base(char *base);
int		base_to_power(int nb, int power);
int		get_size(int nbr, int base_len);
int		check_base(char *base);

int	char_index(char *base, char my_char)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (my_char == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	convert_to_decimal(char *nbr, char *base_from)
{
	int	sum;
	int	b_len;
	int	negative;
	int	j;
	int	i;

	sum = 0;
	negative = 1;
	if (nbr[0] == '-')
	{
		negative = -1;
		nbr++;
	}
	b_len = length_base(base_from);
	j = length_base(nbr) - 1;
	i = 0;
	while (j >= 0)
	{
		sum += (char_index(base_from, nbr[j]) * base_to_power(b_len, i));
		i++;
		j--;
	}
	return (sum * negative);
}

char	*convert_from_decimal(char *base_to, long nbr, int sign)
{
	char	*converted;
	int		b_len;
	int		i;

	b_len = length_base(base_to);
	converted = malloc(sizeof(char) * (get_size(nbr, b_len) + 1));
	if (converted == NULL)
		return (NULL);
	if (nbr < 0)
		nbr = nbr * (-1);
	i = 0 ;
	if (nbr == 0)
		converted[i++] = base_to[0];
	while (nbr > 0)
	{
		converted[i] = base_to[(nbr % b_len)];
		i++;
		nbr = nbr / b_len;
	}
	if (sign == -1)
		converted[i++] = '-';
	converted[i] = '\0';
	reverse_number(converted, i);
	return (converted);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		decimal_num;
	int		negative;

	negative = 0;
	if (nbr == NULL)
		result = NULL;
	else if ((check_base(base_from) != 1) || (check_base(base_to) != 1))
		result = NULL;
	else
	{
		decimal_num = convert_to_decimal(nbr, base_from);
		if (decimal_num < 0)
			negative = -1;
		result = convert_from_decimal(base_to, decimal_num, negative);
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	char *nbr = "-1011101";
	char *fromv = "01234567";
	char *tov = "0123456789abcdef";
	
	char *resultc = malloc(sizeof(char));
	resultc =  ft_convert_base(nbr, fromv, tov);
	printf("nbr=%s\n from =%s\nto= %s\nresult= %s",nbr,fromv,tov,resultc);

}*/
