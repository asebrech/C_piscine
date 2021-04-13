/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 10:57:07 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/16 14:51:54 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	int len;

	len = t_base(base);
	if (len > 1)
	{
		if (nbr <= len && nbr >= 0)
		{
			ft_putchar(base[nbr]);
		}
		else if (nbr >= -len && nbr < 0)
		{
			ft_putchar('-');
			ft_putchar(base[-nbr]);
		}
		else if (nbr > len)
		{
			ft_putnbr_base((nbr / len), base);
			ft_putchar(base[nbr % len]);
		}
		else
		{
			ft_putnbr_base((nbr / len), base);
			ft_putchar(base[(-(nbr % len))]);
		}
	}
}
