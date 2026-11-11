/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 17:24:15 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/06 16:04:31 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*
int	addition_by_2(int num)
{
	return (num + 2);
}
*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*update_tab;
	int	i;

	update_tab = malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		update_tab[i] = f(tab[i]);
		i++;
	}
	return (update_tab);
}
/*#include <stdio.h>
int main()
{
	int arr[5] = {0,0,0,0,0};
	int len = 5 ;
	int *newarr =  ft_map(arr, len , &addition_by_2);

	int i = 0;
	while(i < len)
	{
		printf("%d " , newarr[i]);
		i++;
	}
}*/
