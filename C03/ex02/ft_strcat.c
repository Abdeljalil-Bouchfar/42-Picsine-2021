/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:56:51 by abouchfa          #+#    #+#             */
/*   Updated: 2021/09/28 10:23:13 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*dest)
	{
		dest++;
		i++;
	}
	while (*src)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = 0;
	return (dest - i);
}
