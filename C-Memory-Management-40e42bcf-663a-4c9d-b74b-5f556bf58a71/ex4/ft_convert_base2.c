/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 14:11:43 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/12 09:51:01 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	length_base(char *base)
{
	int	len;

	if (base == NULL)
		return (0);
	len = 0;
	while (base[len])
		len++;
	return (len);
}

int	base_to_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb ;
		power-- ;
	}
	return (result);
}

int	get_size(int nbr, int base_len)
{
	long	num;
	int		count;

	num = nbr;
	count = 0;
	if (num == 0)
		count = 1;
	else if (num < 0)
	{
		count++;
		num = -1 * num;
	}
	while (num > 0)
	{
		num = num / base_len;
		count++;
	}
	return (count);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (base == NULL || base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (base[i] == ' ' || base[i] == '\n' || base[i] == '\t')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	reverse_number(char *tab, int size)
{
	char	temp ;
	int		i;
	int		j;

	i = 0 ;
	j = size - 1 ;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++ ;
		j-- ;
	}
}
/*
#include <stdio.h>

int main()
{
	
	char *base1 = "pz\nre";
	char *base2 = "123\tabc";
	char *base3 = "";

	printf("base1 = %s %d\n" , base1 , get_size(325, 2) );
	printf("base2 = %s %d\n" , base2 , get_size(-10 , 2));
	printf("base3 = %s %d\n" , base3 , get_size(0 , 16));
	

	printf("len = %d\n" , base_to_power(2 , 3));

	char *nbr = "356";
	char *x = reverse_num(nbr, 3);
	 printf("rev = %s\n" ,x);


}*/
