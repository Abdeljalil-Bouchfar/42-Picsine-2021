/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:32:31 by abouchfa          #+#    #+#             */
/*   Updated: 2021/09/30 16:20:03 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*dest_p;

	dest_p = dest;
	i = -1;
	while (*dest)
		dest++;
	while (src[++i] && i < nb)
		dest[i] = src[i];
	if (nb)
		dest[i] = 0;
	return (dest_p);
}
