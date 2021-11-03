/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:08:02 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/14 11:23:25 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	asc;
	int	des;

	i = 0;
	asc = 1;
	des = 1;
	while (++i < length)
		if (f(tab[i - 1], tab[i]) > 0)
			asc = 0;
	i = 0;
	while (++i < length)
		if (f(tab[i - 1], tab[i]) < 0)
			des = 0;
	return (asc || des);
}
