/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarlow- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 11:08:37 by tbarlow-          #+#    #+#             */
/*   Updated: 2017/07/31 09:12:05 by tbarlow-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"
#include <fcntl.h>

void	get_stuff(t_list **config)
{
	char	*line;
	int		ret;
	int		fd;

	ret	= 69;
	fd = open("farm.map", O_RDONLY);
	while (ret != -1)
	{
		ret = get_next_line(fd, &line);
		*config = list_add(*config, list_new(line));
	}
	close(fd);
}

int		main(void)
{
	t_list	*config;
	int		fd;
	char	*line;
	t_house	*house;	

	house = malloc(sizeof(t_house));
	printf("%s\n", "IM AN ANT FARMER");	
	config = NULL;
	get_stuff(&config);
	list_print(config);
	init_house(house, config);
	return (0);
}
