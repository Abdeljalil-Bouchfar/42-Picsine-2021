/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:08:15 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/12 17:55:56 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		dest[i] = src[i];
	dest[i] = 0;
}

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
		if (c == charset[i++])
			return (1);
	return (0);
}

void	collect_words(char **arr, char *str, char *charset)
{
	int	index;
	int	i;
	int	n;

	index = 0;
	i = 0;
	while (str[i])
	{
		while (is_separator(str[i], charset))
			i++;
		n = i;
		while (!is_separator(str[i], charset) && str[i])
			i++;
		n = i - n;
		arr[index] = malloc(n + 1);
		ft_strncpy(arr[index], str + i - n, n);
		index++;
	}
}

int	words_counter(char *str, char *charset)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (!is_separator(str[i], charset))
			words++;
		while (!is_separator(str[i], charset) && str[i])
			i++;
		i++;
	}
	return (words);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		length;

	length = words_counter(str, charset);
	arr = malloc((length + 1) * sizeof(char *));
	if (!arr)
		return (0);
	if (length)
		collect_words(arr, str, charset);
	arr[length] = 0;
	return (arr);
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	int i = 0;
	char **words = ft_split(av[1], av[2]);
	while(words[i])
		printf("%s ", words[i++]);
}
*/
