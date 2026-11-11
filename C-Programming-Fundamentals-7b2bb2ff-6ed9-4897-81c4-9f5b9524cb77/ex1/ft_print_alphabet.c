/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:26:19 by lalbatai          #+#    #+#             */
/*   Updated: 2026/04/26 14:42:03 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	my_char ;

	my_char = 'a' ;
	while (my_char <= 'z')
	{
		write(1, &my_char, 1);
		my_char++ ;
	}
}
