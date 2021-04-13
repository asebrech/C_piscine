/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 06:57:17 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/24 11:21:00 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	while (src[len] != '\0')
		len++;
	dest = malloc(sizeof(char) * len + 1);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;
	int			i;

	if (!(stock = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1)))
		return (0);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		if (!(stock[i].str = malloc(sizeof(char) * (ft_strlen(av[i] + 1)))))
			return (0);
		stock[i].str = av[i];
		if (!(stock[i].copy = malloc(sizeof(char) * (ft_strlen(av[i] + 1)))))
			return (0);
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
