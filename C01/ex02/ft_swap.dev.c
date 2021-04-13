/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.dev.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 12:58:48 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/11 13:18:34 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(void)
{
	int a;
	int b;

	a = 117;
	b = 312;
	printf("a = %d | b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d | b = %d\n", a, b);
	return (0);
}
