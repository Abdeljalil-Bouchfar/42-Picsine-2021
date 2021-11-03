/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:15:58 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/13 20:27:18 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	add(int a, int b)
{
	int	n;

	n = a + b;
	ft_putnbr(n);
}

void	mod(int a, int b)
{
	int	n;

	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return ;
	}
	n = a % b;
	ft_putnbr(n);
}

void	sub(int a, int b)
{
	int	n;

	n = a - b;
	ft_putnbr(n);
}

void	mul(int a, int b)
{
	int	n;

	n = a * b;
	ft_putnbr(n);
}

void	div(int a, int b)
{
	int	n;

	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return ;
	}	
	n = a / b;
	ft_putnbr(n);
}
