/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.dev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 14:37:57 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/11 14:51:51 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		main(void)
{
	char str[10];

	str[0] = 's';
	str[1] = 'a';
	str[2] = 'l';
	str[3] = 'u';
	str[4] = 't';
	str[5] = '\0';
	printf("taille = %d", ft_strlen(str));
}
