/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 12:13:21 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/13 11:12:40 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	comparison(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

void	sort_args(char **tab, int length)
{
	char	*temp;
	int		cmp_result;
	int		i;
	int		j;

	i = 1;
	while (i < length)
	{
		j = 1;
		while (j < (length - 1))
		{
			cmp_result = comparison(tab[j], tab[j + 1]);
			if (cmp_result > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_print(char *tab)
{
	char	temp;
	int		i;

	i = 0;
	while (tab[i])
	{
		temp = tab[i];
		write(1, &temp, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc >= 2)
	{
		sort_args(argv, argc);
		i = 1;
		while (i < argc)
		{
			ft_print(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
