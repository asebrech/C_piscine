/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 08:15:56 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/22 09:53:17 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		length(int size, char **strs, char *sep)
{
	int i;
	int j;
	int len;

	len = 0;
	while (sep[len] != '\0')
		len++;
	len = len * (size - 1);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*join(int size, char *str, char **strs, char *sep)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			str[k] = sep[j];
			j++;
			k++;
		}
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	if (size == 0)
	{
		str = 0;
		return (str);
	}
	i = 0;
	len = length(size, strs, sep);
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (str);
	str = join(size, str, strs, sep);
	str[len] = '\0';
	return (str);
}
