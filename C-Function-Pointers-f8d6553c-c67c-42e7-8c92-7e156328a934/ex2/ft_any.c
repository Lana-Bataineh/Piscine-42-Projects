/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 13:30:26 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/06 15:06:57 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*int	any_capital_letter(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			return (1);
		i++;
	}
	return (0);
}
*/
int	ft_any(char **tab, int (*f)(char*))
{
	int	row;

	row = 0;
	while (tab[row])
	{
		if (f(tab[row]) == 1)
			return (1);
		row++ ;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char *str[4] = {"ana" , "Nour" ,"aya" ,"salam"};
	
	int result = ft_any( str,&any_capital_letter );
	printf("result = %d ", result);
}*/
