/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 14:18:57 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/14 14:45:16 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr_non_printable(char *str);

int		main(void)
{
	char str[] = "efhbe\nwfef17";
	str[4] = 12;
	str[8] = 19;

	ft_putstr_non_printable(str);
	return (0);
}
