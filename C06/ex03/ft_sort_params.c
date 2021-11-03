/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:18:08 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/03 19:13:50 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_params(char **tab, int size)
{
	int	i;
	int	j;
	int	min_index;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min_index = i;
		while (j < size)
		{
			if (ft_strcmp(tab[min_index], tab[j]) > 0)
				min_index = j;
			j++;
		}
		if (min_index != i)
			ft_swap(&tab[min_index], &tab[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 2)
		sort_params(&av[1], (ac - 1));
	while (++i < ac)
	{
		while (*av[i])
			write (1, av[i]++, 1);
		write (1, "\n", 1);
	}
}
