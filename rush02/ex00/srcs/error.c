/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 15:05:27 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/28 17:03:38 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*is_number(char *str)
{
	while (*str >= '0' && *str <= '9')
		str++;
	return (str);
}

char	*is_space(char *str)
{
	while (*str == ' ' || *str == '\t')
        str++;
	return (str);
}

char	*is_printable(char *str)
{
	while (*str >= 32 && *str <= 126)
		str++;
	return (str);
}

int		is_dico(char *str)
{
	while (*str != '\0')
	{
		str = is_number(str);
		str = is_space(str);
		if (*str == ':')
			str++;
		else
			return (0);
		str = is_space(str);
		str = is_printable(str);
		while (*str == '\n')
			str++;
	}
	if (*str == '\0')
		return (1);
	else
		return (0);
}
