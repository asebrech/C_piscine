/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.dev.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 15:22:42 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/11 16:50:25 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int swap;

	i = -1;
	while (i++ < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = -1;
		}
	}
}

int		main(void)
{
	int tab[5];
	int i;

	tab[0] = 5;
	tab[1] = 6;
	tab[2] = 6;
	tab[3] = 2;
	tab[4] = 7;
	i = 0;
	ft_sort_int_tab(tab, 5);
	while (i < 5)
	{
		printf("i = %d ; %d\n", i, tab[i]);
		i++;
	}
}
