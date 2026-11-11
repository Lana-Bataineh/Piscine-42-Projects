/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 11:46:25 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/13 10:52:35 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	temp;
	int		i;

	if (argc >= 1)
	{
		i = 0;
		while (argv[0][i])
		{
			temp = argv[0][i];
			write(1, &temp, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
