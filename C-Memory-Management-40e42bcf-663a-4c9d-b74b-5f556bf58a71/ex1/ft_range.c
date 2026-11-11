/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 18:36:32 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/12 14:27:30 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*my_values;
	int	counter;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	my_values = malloc(sizeof(int) * size);
	if (my_values == NULL)
		return (NULL);
	counter = 0;
	i = min;
	while (i < max)
	{
		my_values[counter] = i ;
		counter++ ;
		i++;
	}
	return (my_values);
}
/*
#include <stdio.h>
int main()
{
	int	*ptr;
	int	x;

	ptr = ft_range(-55, 34);

	int z = 34 + 55 ;
	x = 0;
	if(ptr== NULL)
		return 0;
	while (x < z)
	{
		printf("%d \t" , ptr[x]);
		x++;
	}
}*/
