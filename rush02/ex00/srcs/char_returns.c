/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_returns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberengu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 12:15:32 by mberengu          #+#    #+#             */
/*   Updated: 2021/02/28 12:15:34 by mberengu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structure.h"

char			*return_teens(char *str)
{
	static char	st[3];

	st[0] = str[0];
	st[1] = str[1];
	st[2] = '\0';
	return (st);
}

char			*return_str(char *str)
{
	int			i;
	static char	st[256];

	i = 0;
	while (str[i] >= 'a' && str[i] <= 'z')
	{
		st[i] = str[i];
		i++;
	}
	st[i] = '\0';
	return (st);
}

char			*return_char(char *str)
{
	static char st[2];

	st[0] = str[0];
	st[1] = '\0';
	return (st);
}
