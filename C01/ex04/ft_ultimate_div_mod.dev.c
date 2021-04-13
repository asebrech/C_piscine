/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.dev.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 14:06:07 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/11 14:18:42 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int		main(void)
{
	int a;
	int b;

	a = 117;
	b = 10;
	printf("%d / %d = \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d mod = %d \n", a, b);
	return (0);
}
