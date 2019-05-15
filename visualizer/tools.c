/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ishaimou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 00:26:45 by ishaimou          #+#    #+#             */
/*   Updated: 2019/05/15 03:31:01 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "visualizer.h"

void	print_map(char **map)
{
	while (*map)
	{
		printf("%s\n", *map);
		map++;
	}
}

void	print_list(t_dlist *begin)
{
	int		count = 0;
	int		i = 0;
	while (begin)
	{
		i++;
		if (!begin->map)
		{
			count++;
			printf("i = %d\n", i);
			//print_map(begin->map);
		}
		//print_map(begin->map);
		//ft_printf("\n");
		begin = begin->next;
	}
	printf("count = %d\n", count);
}

int		ft_list_size(t_dlist *begin_list)
{
	int		i;

	i = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}