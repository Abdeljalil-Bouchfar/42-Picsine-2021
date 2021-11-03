/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:27:23 by abouchfa          #+#    #+#             */
/*   Updated: 2021/09/28 12:07:48 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	isAlpha(char c)
{
	if (c >= 'A' && c <= 'z' && (c < 91 || c > 96))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;
	int	pcIsNum;

	i = 0;
	while (str[i])
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			j = i - 1;
			pcIsNum = str[j] >= '0' && str[j] <= '9';
			if (!isAlpha(str[j]) && !pcIsNum && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (isAlpha(str[j]) || pcIsNum)
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
		}
		i++;
	}
	return (str);
}
