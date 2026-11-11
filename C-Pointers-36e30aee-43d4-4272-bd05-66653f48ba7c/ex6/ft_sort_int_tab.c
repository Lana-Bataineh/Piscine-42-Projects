/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:18:25 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/04 11:47:02 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp ;
	int	i ;
	int	j ;

	i = 0 ;
	while (i < (size - 1))
	{
		j = 0 ;
		while (j < (size - 1) - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp ;
			}
			j++;
		}
		i++;
	}
}
