/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:37:07 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/12 14:32:23 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*range_values;
	int	size;
	int	i;

	if (min >= max)
	{
		range_values = NULL;
		return (0);
	}
	size = max - min ;
	range_values = malloc(sizeof(int) * (size + 1));
	if (range_values == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		range_values[i] = min;
		min++;
		i++;
	}
	*range = range_values ;
	return (size);
}
