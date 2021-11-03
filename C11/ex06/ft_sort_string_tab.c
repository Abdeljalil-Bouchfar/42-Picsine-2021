/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouchfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:21:31 by abouchfa          #+#    #+#             */
/*   Updated: 2021/10/13 19:39:55 by abouchfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	min_index;

	i = 0;
	while (tab[i + 1])
	{
		j = i + 1;
		min_index = i;
		while (tab[j])
		{
			if (ft_strcmp(tab[min_index], tab[j]) > 0)
				min_index = j;
			j++;
		}
		if (min_index != i)
			ft_swap(&tab[min_index], &tab[i]);
		i++;
	}
}
