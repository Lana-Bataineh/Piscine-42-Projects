/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 20:05:34 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/05 15:42:53 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	*hx;
	char	hex0;
	char	hex1;
	int		i;

	hx = "0123456789abcdef" ;
	i = 0 ;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write (1, "\\", 1);
			hex0 = hx[str[i] / 16];
			hex1 = hx[str[i] % 16];
			write (1, &hex0, 1);
			write (1, &hex1, 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}
