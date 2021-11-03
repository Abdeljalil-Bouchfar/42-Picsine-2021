/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:38:43 by abouchfa          #+#    #+#             */
/*   Updated: 2021/09/30 14:49:06 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	s_l;
	unsigned int	d_l;

	j = 0;
	s_l = 0;
	d_l = 0;
	while (dest[d_l])
		d_l++;
	while (src[s_l])
		s_l++;
	if (d_l >= size)
		return (size + s_l);
	i = d_l;
	while (src[j] && i < (size - 1))
		dest[i++] = src[j++];
	dest[i] = 0;
	return (d_l + s_l);
}
