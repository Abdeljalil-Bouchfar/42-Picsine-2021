/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:38:26 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/04 20:49:27 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	sq;
	unsigned int	i;

	sq = 0;
	i = nb;
	if (nb < 0)
		return (0);
	while (sq * sq <= i)
	{
		if (sq * sq == i)
			return (sq);
		sq++;
	}
	return (0);
}
