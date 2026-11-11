/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 11:43:54 by lalbatai          #+#    #+#             */
/*   Updated: 2026/04/30 17:13:49 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	hundreds ;
	int	tens ;
	int	ones ;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1 ;
		while (tens <= '8')
		{
			ones = tens + 1 ;
			while (ones <= '9')
			{
				write(1, &hundreds, 1);
				write(1, &tens, 1);
				write(1, &ones, 1);
				if (!(hundreds == '7' && tens == '8' && ones == '9'))
					write(1, ", ", 2);
				ones++ ;
			}
			tens++ ;
		}
		hundreds++ ;
	}
}
