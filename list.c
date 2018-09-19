/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 11:42:10 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/07/28 14:15:29 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	list_print(t_list *list)
{
	while (list->next != NULL)
	{
		if (list->value)
			ft_putstr(list->value);
		ft_putchar('\n');
		list = list->next;
	}
}

t_list	*list_new(char *value)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	new->value = value;
	new->next = NULL;
	return (new);
}

t_list	*list_add(t_list *list, t_list *newlist)
{
	t_list	*temp;

	temp = list;
	if (list)
	{	
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newlist;
	}
	else
		list = newlist;
	return (list);
}
