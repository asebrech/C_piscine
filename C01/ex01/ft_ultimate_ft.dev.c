/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.dev.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 11:43:20 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/11 12:54:14 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int		main(void)
{	
	int	*********nbr9;
	int	********nbr8;
	int	*******nbr7;
	int	******nbr6;
	int	*****nbr5;
	int	****nbr4;
	int	***nbr3;
	int	**nbr2;
	int	*nbr1;
	int nbr;

	nbr = 117;
	nbr1 = &nbr;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;

	ft_ultimate_ft(nbr9);
	printf("%d", nbr);
}
