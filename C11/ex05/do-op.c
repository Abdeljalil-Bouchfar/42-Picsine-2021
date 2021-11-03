/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:27:30 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/13 20:34:39 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

char	check_op(char *str)
{
	int		i;
	char	*ops;

	i = 0;
	ops = "+-/%";
	while (str[0] != ops[i] && i < 4)
		i++;
	if (i == 4 || str[1] != 0)
		return (0);
	return (str[0]);
}

void	do_op(int a, int b, char op, void (*f)(int, int))
{
	if (b == 0 && op == '/')
		ft_putstr("Stop : division by zero");
	else if (b == 0 && op == '%')
		ft_putstr("Stop : modulo by zero");
	else
		f(a, b);
	write (1, "\n", 1);
}

int	main(int ac, char **av)
{
	char	op;
	int		a;
	int		b;

	if (ac == 4)
	{
		op = check_op(av[2]);
		if (!op)
			write (1, "0\n", 2);
		a = ft_atoi(av[1]);
		b = ft_atoi(av[3]);
		if (op == '+')
			do_op (a, b, op, &add);
		if (op == '-')
			do_op (a, b, op, &sub);
		if (op == '/')
			do_op (a, b, op, &div);
		if (op == '%')
			do_op (a, b, op, &mod);
		if (op == '*')
			do_op (a, b, op, &mul);
	}
	return (0);
}
