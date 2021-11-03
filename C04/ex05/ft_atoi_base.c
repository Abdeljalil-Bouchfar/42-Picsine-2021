/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 15:13:37 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/05 14:39:31 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	char_val(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (i);
}

int	base_length(char *base)
{
	int	b_len;
	int	j;

	b_len = 0;
	while (base[b_len])
	{
		j = 0;
		while (base[j])
		{
			if (j != b_len && base[j] == base[b_len])
				return (0);
			j++;
		}
		if (base[b_len] == '-' || base[b_len] == '+')
			return (0);
		b_len++;
	}
	return (b_len);
}

int	getnbr(char *str, char *base, int size)
{
	int	b_len;
	int	n;
	int	power;

	n = 0;
	power = 1;
	b_len = base_length(base);
	if (b_len < 2)
		return (n);
	while (size >= 0)
	{
		n += char_val(str[size--], base) * power;
		power *= b_len;
	}
	return (n);
}

int	valid_base(char *str, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == str[i])
				break ;
			if (base[j + 1] == 0)
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	s_l;
	int	minus;

	minus = 0;
	n = 0;
	while (*str == ' ' || (*str <= 9 && *str >= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	s_l = valid_base(str, base);
	n = getnbr(str, base, s_l - 1);
	if (minus % 2 != 0)
		n *= -1;
	return (n);
}
