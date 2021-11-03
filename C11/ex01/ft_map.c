/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:32:49 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/13 09:44:16 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*arr;

	arr = malloc(length * sizeof(int));
	if (!arr)
		return (0);
	i = -1;
	while (++i < length)
		arr[i] = f(tab[i]);
	return (arr);
}
