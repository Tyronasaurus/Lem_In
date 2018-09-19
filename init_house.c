/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_house.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/28 14:09:05 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/07/31 11:38:56 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	init_house(t_house *house, t_list *config)
{
	t_room		*room;
	char		**string;

	room = malloc(sizeof(t_room));
	while (config->next != NULL)
	{
		if (config->value[0] != '#')
		{
			string = ft_strsplit(config->value, ' ');
			room->name = string[0];
			printf("%s\n", room->name);
		}
		config = config->next;
	}
	while (room->next != NULL)
	{
		printf("%s\n", room->name);
		room = room->next;
	}
}
