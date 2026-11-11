/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalbatai <lalbatai@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 11:59:44 by lalbatai          #+#    #+#             */
/*   Updated: 2026/05/11 18:22:24 by lalbatai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_seperator(char my_char, char *charset)
{
	int	i;

	i = 0 ;
	while (charset[i])
	{
		if (my_char == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	words_count(char *str, char *sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_seperator(str[i], sep))
			i++ ;
		if (str[i])
		{
			count++;
			i++;
		}
		while (str[i] && !is_seperator(str[i], sep))
			i++;
	}
	return (count);
}

char	*copy_word(char *str, int start, int end)
{
	char	*des;
	int		i;

	des = malloc(sizeof(char) * ((end - start) + 1));
	if (des == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		des[i] = str[start];
		start++;
		i++;
	}
	des[i] = '\0';
	return (des);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i_str;
	int		j_res;
	int		start;

	result = malloc (sizeof(char *) * (words_count(str, charset) + 1));
	if (result == NULL)
		return (NULL);
	j_res = 0;
	i_str = 0;
	while (str[i_str])
	{
		while (str[i_str] && is_seperator(str[i_str], charset))
			i_str++;
		start = i_str;
		while (str[i_str] && !is_seperator(str[i_str], charset))
			i_str++;
		if (start < i_str)
		{
			result[j_res] = copy_word(str, start, i_str);
			j_res++ ;
		}
	}
	result[j_res] = NULL;
	return (result);
}
/*
#include <stdio.h>
int main()
{
	char *str ;
	str = "   hello- +world- +code- +lana";

	char *charset = "- +";

	printf("my string :%s\n" ,str);
	printf("my char set:%s\n" ,charset);
	
	char **res;
	res = ft_split(str,charset);
	  printf("\n" );

	int i = 0;

	while(res[i])
	{
		printf("result[%d] = %s\n" ,i ,res[i]);
		i++;
	}

}*/
