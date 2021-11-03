/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:17:24 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/06 09:22:41 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = malloc(i + 1);
	if (!str)
		return ((char *)0);
	i = 0;
	while (*src)
		str[i++] = *src++;
	str[i] = 0;
	return (str);
}
