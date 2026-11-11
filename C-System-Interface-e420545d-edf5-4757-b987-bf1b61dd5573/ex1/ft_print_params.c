/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 11:57:28 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/13 11:00:08 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	temp;
	int		i;
	int		j;

	if (argc >= 2)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				temp = argv[i][j];
				write(1, &temp, 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
