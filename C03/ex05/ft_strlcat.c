/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asebrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 11:36:55 by asebrech          #+#    #+#             */
/*   Updated: 2021/02/15 15:28:17 by asebrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;
	unsigned int len1;

	i = 0;
	len = 0;
	len1 = 0;
	while (dest[len] != '\0')
		len++;
	while (src[len1] != '\0')
		len1++;
	if (size == 0 || len > size)
		return (len1 + size);
	while (src[i] != '\0' && len < size)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len - 1] = '\0';
	return (len);
}
