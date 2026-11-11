/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:31:40 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/06 17:16:51 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*int	check_values(int first, int second)
{
	return (first - second);
}
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	des;
	int	result;

	asc = 0 ;
	des = 0 ;
	i = 0 ;
	if (length == 0 || length == 1)
		return (1);
	while (i < (length - 1))
	{
		result = f(tab[i], tab[i + 1]);
		if (result <= 0)
			asc++;
		if (result >= 0)
			des++;
		i++;
	}
	if (asc == (length - 1))
		return (1);
	else if (des == (length - 1))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>

int main()
{
	int tab[0] = {};
	int result = ft_is_sort(tab,0,&check_values);
	printf("result = %d", result);
}*/
