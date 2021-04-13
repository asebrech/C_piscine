/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberengu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 12:15:23 by mberengu          #+#    #+#             */
/*   Updated: 2021/02/28 14:05:44 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

void			final_touch_dico(t_stock_trigger *trig, int k)
{
	trig[k].size = -1;
	trig[k].indice = -1;
	trig[k].name = 0;
}

void			final_touch_trigger(t_stock_dico *dict, int k)
{
	dict[k].size = -1;
	dict[k].nbr = 0;
	dict[k].name = 0;
}

void			fill_dico_up(t_stock_dico *dict, char *str, int k)
{
	int			i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (str[i] == '1' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
		{
			dict[k].nbr = ft_strdup(return_teens(&str[i]));
		}
		else
		{
			dict[k].nbr = ft_strdup(return_char(&str[i]));
		}
		while (str[i] >= '0' && str[i] <= '9')
			i++;
	}
}

int				fill_trigger_up(t_stock_trigger *trig, char *str, int k, int j)
{
	int i;

	i = 0;
	trig[k].size = size(&str[0]);
	trig[k].indice = k;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (i + j);
}
