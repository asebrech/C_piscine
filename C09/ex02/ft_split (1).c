/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmercadi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:05:29 by dmercadi          #+#    #+#             */
/*   Updated: 2021/02/25 11:16:10 by dmercadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_found_char(char c, char *charset)
{
	int res;

	res = 0;
	while (!res && *charset)
	{
		if (c == *charset)
			res = 1;
		charset++;
	}
	return (res);
}

int		ft_word_count(char *str, char *charset, int *str_i)
{
	int taille;
	int i;

	i = 0;
	taille = 0;
	while (str[*str_i + i] && !(ft_found_char(str[*str_i + i], charset)))
	{
		taille++;
		i++;
	}
	return (taille);
}

char	*ft_next_word(char *str, char *charset, int *str_i)
{
	char	*word;
	int		taille;
	int		i;

	while (str[*str_i] && ft_found_char(str[*str_i], charset))
		*str_i += 1;
	taille = ft_word_count(str, charset, str_i);
	if (!(word = (char *)malloc(sizeof(char) * (taille + 1))))
		word = NULL;
	else
	{
		i = 0;
		while (i < taille)
		{
			word[i] = str[*str_i];
			*str_i += 1;
			i++;
		}
		word[taille] = '\0';
	}
	return (word);
}

int		ft_char_count(char *str, char *charset)
{
	int	is_word;
	int compteur;
	int i;

	is_word = 0;
	compteur = 0;
	i = 0;
	while (str[i])
	{
		if (ft_found_char(str[i], charset) && is_word)
		{
			compteur++;
			is_word = 0;
		}
		else if (!ft_found_char(str[i], charset) && !is_word)
			is_word = 1;
		i++;
	}
	compteur = is_word ? compteur + 1 : compteur;
	return (compteur);
}

char	**ft_split(char *str, char *charset)
{
	int		taille;
	char	**tab;
	int		i;
	int		str_i;
	int		*str_i_ptr;

	taille = ft_char_count(str, charset);
	if (taille == 0)
	{
		tab = (char **)malloc(sizeof(char *));
		*tab = 0;
	}
	else if (!(tab = (char **)malloc(sizeof(char *) * taille + 1)))
		tab = NULL;
	else
	{
		i = -1;
		str_i = 0;
		str_i_ptr = &str_i;
		while (++i < taille)
			tab[i] = ft_next_word(str, charset, str_i_ptr);
		tab[taille] = 0;
	}
	return (tab);
}
