/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norminette.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberengu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 12:15:51 by mberengu          #+#    #+#             */
/*   Updated: 2021/02/28 12:15:58 by mberengu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

int				norminette(t_stock_dico *dict, char *str, int j, int k)
{
	int i;
	int taille;

	i = 0;
	taille = size(&str[i]);
	dict[k].size = size(&str[i]);
	fill_dico_up(dict, &str[i], k);
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (j + i);
}

int				norminette_tjrs(t_stock_trigger *trig, int k, char *str, int j)
{
	int i;

	i = 0;
	trig[k].name = ft_strdup(return_str(&str[i]));
	while (str[i] >= 'a' && str[i] <= 'z')
		i++;
	return (i + j);
}

void			norminette_mon_amour(int *i, int *k, int *taille)
{
	*taille = 0;
	*i = -1;
	*k = 0;
}
