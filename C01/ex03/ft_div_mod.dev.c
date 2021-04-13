/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.dev.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:20:50 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/11 14:04:04 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 11;
	b = 8;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n", div, mod);
}
