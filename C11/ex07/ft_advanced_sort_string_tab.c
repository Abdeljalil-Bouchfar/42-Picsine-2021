/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:40:08 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/14 13:16:33 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;
	int	length;

	length = 0;
	while (tab[length])
		length++;
	while (length-- > 0)
	{
		i = 0;
		while (i++ < length)
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
				ft_swap(&tab[i - 1], &tab[i]);
		}
	}
}
