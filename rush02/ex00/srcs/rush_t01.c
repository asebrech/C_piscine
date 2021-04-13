/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_t0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberengu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 08:11:52 by mberengu          #+#    #+#             */
/*   Updated: 2021/02/28 12:16:10 by mberengu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "structure.h"
#include <stdio.h>

t_stock_trigger	*trigdb(char *str)
{
	t_stock_trigger		*trig;
	int					taille;
	int					i;
	int					k;

	norminette_mon_amour(&i, &k, &taille);
	trig = (t_stock_trigger*)malloc(sizeof(t_stock_trigger) * 13);
	while (str[++i])
	{
		while (taille < 3)
		{
			taille = size(&str[i]);
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
			i = fill_trigger_up(trig, &str[i], k, i);
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i = norminette_tjrs(trig, k, &str[i], i);
			k++;
			if (i > ft_strlen(str))
				break ;
		}
	}
	return (trig);
}

t_stock_dico	*selected_word(char *str)
{
	int					i;
	int					taille;
	t_stock_dico		*dict;
	int					k;

	i = 0;
	k = 0;
	dict = (t_stock_dico*)malloc(sizeof(t_stock_dico) * 43);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i = norminette(dict, &str[i], i, k);
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			dict[k].name = ft_strdup(return_str(&str[i]));
			k++;
			while (str[i] >= 'a' && str[i] <= 'z')
				i++;
		}
		i++;
	}
	final_touch_trigger(dict, k);
	return (dict);
}
