/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 14:44:16 by abouchfa          #+#    #+#             */
/*   Updated: 2021/09/30 08:52:15 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*g_hex = "0123456789abcdef";

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned char *str)
{
	int	i;
	int	n;

	i = 0;
	while (i < 16)
	{
		n = str[i];
		if (i % 2 == 0)
			ft_putchar(' ');
		ft_putchar(g_hex[n / 16]);
		ft_putchar(g_hex[n % 16]);
		if (str[i] == '\0')
			break ;
		i++;
	}
}

void	print_address(unsigned int addr, int n)
{
	if (addr < 16)
	{
		while (--n > 0)
			ft_putchar('0');
		ft_putchar(g_hex[addr]);
		return ;
	}
	print_address(addr / 16, --n);
	ft_putchar(g_hex[addr % 16]);
}

void	print_words(unsigned char *str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (str[i] <= 31 || str[i] < 0)
			ft_putchar('.');
		else
			write(1, &str[i], 1);
		if (str[i] == '\0')
			break ;
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (!(size && addr))
		return (addr);
	while (i <= size)
	{
		if (i % 16 == 0)
		{
			print_address((unsigned int) &addr[i], 16);
			ft_putchar(':');
			print_hex(&addr[i]);
			ft_putchar(' ');
			print_words(&addr[i]);
		}
		i++;
	}
	return (addr);
}

int main()
{
	void *p =" Bonjour les amin ches...c est fo";
	ft_print_memory(p, 32);
}
