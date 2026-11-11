/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:20:40 by lalbatai          #+#    #+#             */
/*   Updated: 2026/04/30 13:27:03 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_my_number(char *str, int n)
{
	int	i ;

	i = 0 ;
	while (i < n)
	{
		write(1, &str[i], 1);
		i++ ;
	}
	if (! (str[0] == ((10 - n) + '0')))
		write(1, ", ", 2);
}

void	set_my_numbers(char *str, int start_number, int current_index, int n)
{
	if (current_index == n)
	{
		print_my_number (str, n);
		return ;
	}
	while (start_number <= 9)
	{
		str[current_index] = start_number + '0' ;
		set_my_numbers (str, start_number + 1, current_index + 1, n);
		start_number++ ;
	}
}

void	ft_print_combn(int n)
{
	char	str[10];

	if (n > 0 && n < 10)
		set_my_numbers (str, 0, 0, n);
}
