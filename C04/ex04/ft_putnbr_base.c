/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:09:34 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/05 13:47:28 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long int nb, int len, char *base)
{
	long int	i;

	i = nb;
	if (i >= len)
		ft_putnbr((i / len), len, base);
	ft_putchar(base[i % len]);
}

int	base_len(char *base)
{
	int	len;
	int	j;

	len = 0;
	while (base[len])
	{
		j = 0;
		while (base[j])
		{
			if (j != len && base[j] == base[len])
				return (0);
			j++;
		}
		if (base[len] == '-' || base[len] == '+')
			return (0);
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long int	i;

	if (!*base)
		return ;
	len = base_len(base);
	if (len < 2)
		return ;
	i = nbr;
	if (i < 0)
	{
		ft_putchar('-');
		i = -i;
	}
	ft_putnbr(i, len, base);
}
