/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:49:52 by abouchfa          #+#    #+#             */
/*   Updated: 2021/11/01 11:18:33 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	is_safe_position(int col, int position, int *placements)
{
	int	i;
	int	qx;
	int	qy;
	int	tempx;
	int	tempy;

	qx = col;
	qy = position;
	i = 0;
	while (i < col)
	{
		tempx = i;
		tempy = placements[i];
		if (qx == tempx || qy == tempy
			|| qx - qy == tempx - tempy || qx + qy == tempx + tempy)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int *placements, int col, int *s_counter)
{
	int	position;
	int	i;

	if (col == 10)
	{
		i = 0;
		*s_counter += 1;
		while (i < 10)
			ft_putchar(placements[i++] + '0');
		write (1, "\n", 1);
	}
	position = 0;
	while (position < 10)
	{
		if (is_safe_position(col, , placements))position
		{
			placements[col] = position;
			solve(placements, col + 1, s_counter);
		}
		position++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	placements[10];
	int	s_counter;

	s_counter = 0;
	solve(placements, 0, &s_counter);
	return (s_counter);
}
