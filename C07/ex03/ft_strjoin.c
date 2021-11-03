/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:44:07 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/06 11:23:48 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	join(char *res, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < size - 1)
	{
		j = 0;
		while (sep[j] && c != 0)
			res[i++] = sep[j++];
		j = 0;
		while (strs[c][j])
			res[i++] = strs[c][j++];
		c++;
	}
	res[i] = 0;
}

int	ft_strlen(char **str, int size)
{
	int	i;
	int	j;
	int	len;

	j = 0;
	len = 0;
	while (j < size)
	{
		i = 0;
		while (str[j][i++])
			len++;
		j++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_l;
	int		strs_l;
	int		i;
	char	*res;

	sep_l = 0;
	strs_l = 0;
	if (size == 0)
	{
		res = malloc(1);
		*res = 0;
		return (res);
	}
	sep_l = ft_strlen(&sep, 1);
	strs_l = ft_strlen(strs, size);
	i = strs_l + (sep_l * (size - 1)) + 1;
	res = malloc(i);
	join (res, strs, sep, i);
	return (                                                                                                                                                                                                                                 );
}
