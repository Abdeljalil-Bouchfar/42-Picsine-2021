/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:34:05 by abouchfa          #+#    #+#             */
/*   Updated: 2021/09/29 18:14:41 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	to_hex(unsigned char n)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[n / 16], 1);
	write(1, &hex[n % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if ((unsigned char) *str <= 31 || (unsigned char) *str >= 127)
			to_hex((unsigned char) *str);
		else
			write(1, str, 1);
		str++;
	}
}
