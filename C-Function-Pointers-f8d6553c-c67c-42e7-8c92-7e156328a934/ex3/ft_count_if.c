/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 11:13:47 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/06 15:07:27 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*int	any_digit(char *str)
{
	int	i;

	i = 0 ;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}
*/
int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = 0 ;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>

int main()
{
	char *str[5] = {"sunday","Monday2" , "tuseday" ,"wednesday40" , "5"};
	int result = ft_count_if(str, 5, &any_digit);
	printf("result = %d" , result);
}*/
