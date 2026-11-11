/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:42:10 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/06 15:05:19 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*nclude <unistd.h>

void	print_sign(int num)
{
	if (num < 0)
		write(1, "-", 1);
	else
		write(1, "+", 1);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0 ;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*int main()
{
	int ar[] = {5 , 10 , -15 , -20 , 25};
	int len = 5 ;
	ft_foreach(ar, len, &print_sign);
}*/
