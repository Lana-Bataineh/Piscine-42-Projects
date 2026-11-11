/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 10:35:21 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/12 11:31:15 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	total_strs_char(char **strs)
{
	int	count ;
	int	i ;
	int	j ;

	count = 0;
	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			count++;
			j++;
		}
		i++ ;
	}
	return (count);
}

int	num_of_sep(char *sep)
{
	int	count;
	int	i ;

	count = 0 ;
	i = 0 ;
	while (sep[i])
	{
		count++;
		i++;
	}
	return (count);
}

void	join_strings(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	r;
	int	j;
	int	s;

	i = 0;
	r = 0;
	while (strs[i])
	{
		if (i >= size)
			break ;
		j = 0 ;
		while (strs[i][j])
		{
			result[r++] = strs[i][j++];
		}
		if (i < (size - 1))
		{
			s = 0 ;
			while (sep[s])
				result[r++] = sep[s++];
		}
		i++;
	}
	result[r] = '\0';
}

char	*ft_strjoin(int size, char **strs, char*sep)
{
	char	*connected_str ;
	int		total_chars ;

	if (size == 0)
	{
		connected_str = malloc(sizeof(char) * 1);
		if (connected_str == NULL)
			return (NULL);
		connected_str[0] = '\0';
		return (connected_str);
	}
	total_chars = total_strs_char(strs) + (num_of_sep(sep) * (size - 1));
	connected_str = malloc(sizeof(char) * (total_chars + 1));
	join_strings(connected_str, strs, sep, size);
	return (connected_str);
}
/*
#include <stdio.h>
int main()
{
	char *strs[5] = {"Hello" , "World" ,"Code" , "Test" , "Me"};
	int i = 0;
	while (i < 5)
	{
		int j = 0;
		while (strs[i][j])
		{
		  printf("%c" , strs[i][j]);
		   j++;
		}
		printf("\t");
		i++ ;
	}
	printf("\n");

	char *sep;
	sep = "+-+";
	char *joinedstr ;
	joinedstr = ft_strjoin(2, strs, sep);
	printf("%s" , joinedstr) ;
}*/
