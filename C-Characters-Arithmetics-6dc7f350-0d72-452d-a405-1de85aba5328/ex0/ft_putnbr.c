/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:40:27 by lalbatai          #+#    #+#             */
/*   Updated: 2026/04/30 16:25:01 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	my_digit ;
	long	num ;

	num = nb ;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -1 * num ;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
	my_digit = (num % 10) + '0' ;
	write(1, &my_digit, 1);
}
