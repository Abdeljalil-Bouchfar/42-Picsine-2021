/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:13:16 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/14 13:22:16 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	next_combs(int n, char *comb)
{
	int	i;
	int	j;

	while (comb[0] != (10 - n + '0'))
	{
		i = n - 1;
		write(1, comb, n);
		write(1, ", ", 2);
		while (comb[i] == 58 + i - n)
			i--;
		j = i;
		while (i < n)
		{
			if (i == j)
				comb[i] = comb[i] + 1;
			else
				comb[i] = comb[i - 1] + 1;
			i++;
		}
	}
	write (1, comb, n);
}

void	ft_print_combn(int n)
{
	int		i;
	char	comb[10];

	if (n < 10 && n > 0)
	{
		i = 0;
		while (i < n)
		{
			comb[i] = i + '0';
			i++;
		}
		next_combs(n, comb);
	}
}
