/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 08:45:13 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/07/31 09:11:18 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "./libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list	t_list;
typedef struct s_room	t_room;
typedef struct s_ant	t_ant;

struct			s_list
{
	char		*value;
	t_list		*next;
};

struct			s_room
{
	char		*name;
	t_room		*next;
};

typedef struct					s_house
{
	int			num_ants;
	t_room		*rooms;
	char		*start;
	char		*end;
}						t_house;

struct					s_ant
{
	int			id;
	char		*name;
	t_list		route;
	t_ant		*next;
};

void	list_print(t_list *list);
void	init_house(t_house *house, t_list *config);
t_list	*list_new(char *value);
t_list	*list_add(t_list *list, t_list *newlist);
void	get_stuff(t_list **config);
int		main(void);

#endif
