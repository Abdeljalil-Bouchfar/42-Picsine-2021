/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:41:42 by abouchfa          #+#    #+#             */
/*   Updated: 2021/09/30 13:54:11 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (!*to_find)
		return (str);
	while (*str)
	{
		i = 0;
		while (to_find[i] == str[i])
		{
			if (!to_find[i + 1])
				return (str);
			i++;
		}
		str++;
	}
	return ((char *) 0);
}
