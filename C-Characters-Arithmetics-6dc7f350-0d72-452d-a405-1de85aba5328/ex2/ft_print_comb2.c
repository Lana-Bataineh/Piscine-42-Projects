/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:34:03 by lalbatai          #+#    #+#             */
/*   Updated: 2026/04/30 17:15:00 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	my_digit ;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb ;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	my_digit = (nb % 10) + '0' ;
	write(1, &my_digit, 1);
}

void	one_digit(int num)
{
	if (num == 0)
		write(1, "00", 2);
	else if (0 < num && num < 10)
	{
		write(1, "0", 1);
		ft_putnbr(num);
	}
}

void	ft_print_comb2(void)
{
	int	first ;
	int	second ;

	first = 0 ;
	while (first <= 98)
	{
		second = first + 1 ;
		while (second <= 99)
		{
			if (first < 10)
				one_digit(first);
			else
				ft_putnbr(first);
			write(1, " ", 1);
			if (second < 10)
				one_digit(second);
			else
				ft_putnbr(second);
			if (!(first == 98 && second == 99))
				write(1, ", ", 2);
			second++ ;
		}
		first++ ;
	}
}
