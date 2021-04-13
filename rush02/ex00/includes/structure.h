/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberengu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 11:28:07 by mberengu          #+#    #+#             */
/*   Updated: 2021/02/28 11:48:35 by mberengu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H
# define BUF_SIZE 4096

typedef struct
{
	int			size;
	int			indice;
	char		*name;
}				t_stock_trigger;

typedef struct
{
	int			size;
	char		*nbr;
	char		*name;
}				t_stock_dico;

int				ft_strlen(char *str);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strdup(char *src);
int				size(char *str);
char			*return_teens(char *str);
char			*return_str(char *str);
char			*return_char(char *str);
void			final_touch_dico(t_stock_trigger *trig, int k);
void			final_touch_trigger(t_stock_dico *dict, int k);
void			fill_dico_up(t_stock_dico *dict, char *str, int k);
int				fill_trigger_up(t_stock_trigger *trig, char *str, int k, int j);
int				norminette(t_stock_dico *dict, char *str, int j, int k);
int				norminette_tjrs(t_stock_trigger *trig, int k, char *str, int j);
void			norminette_mon_amour(int *i, int *k, int *taille);
t_stock_trigger	*trigdb(char *str);
t_stock_dico	*selected_word(char *str);

#endif
