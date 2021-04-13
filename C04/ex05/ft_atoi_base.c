/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 14:55:12 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/17 08:17:30 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		t_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int		is_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0' && base[i] != c)
		i++;
	return (i);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int sign;
	int res;
	int len;

	i = 0;
	sign = 1;
	res = 0;

	len = t_base(base);
	if (len > 1)
	{
		while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
				str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (is_base(*str, base) < len)
		{
			res = res * len - is_base(*str++, base);
			i++;
		}
		res *= sign;
	}
	return (res);
}
