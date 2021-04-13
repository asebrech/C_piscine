/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 07:46:06 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/14 08:32:14 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int row;
	int column;

	row = 0;
	column = 0;
	while (column < x && row < y)
	{
		if (row == 0 && column == 0)
			ft_putchar('/');
		else if (row == 0 && column == (x - 1))
			ft_putchar('\\');
		else if (row == (y - 1) && column == 0)
			ft_putchar('\\');
		else if (row == (y - 1) && column == (x - 1))
			ft_putchar('/');
		else if (row == 0 || row == (y - 1))
			ft_putchar('*');
		else if (column == 0 || column == (x - 1))
			ft_putchar('*');
		else
			ft_putchar(' ');
		ft_putchar(column == (x - 1) ? '\n' : 0);
		row = column == (x - 1) ? row + 1 : row;
		column = column == (x - 1) ? 0 : column + 1;
	}
}
