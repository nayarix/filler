/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaimou <ishaimou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 05:42:24 by ishaimou          #+#    #+#             */
/*   Updated: 2019/05/26 05:42:25 by ishaimou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_lst		*add_node(t_lst *head, t_lst *node)
{
	t_lst	*current;

	current = head;
	if (!head)
		return (node);
	while (current->next)
		current = current->next;
	current->next = node;
	return (head);
}

void		init_chr(t_chr **chr)
{
	(*chr)->str = NULL;
	(*chr)->len = 0;
	(*chr)->next = NULL;
}

int			lstlen(t_lst *lst)
{
	t_lst	*curr;
	int		size;

	size = 0;
	curr = lst;
	while (curr)
	{
		size++;
		curr = curr->next;
	}
	return (size);
}

void		free_chr(t_chr **chr)
{
	t_chr	*curr;
	t_chr	*next;

	curr = *chr;
	while (curr)
	{
		next = curr->next;
		if (curr->str)
			free(curr->str);
		free(curr);
		curr = next;
	}
	*chr = NULL;
}

void		free_lst(t_lst **lst)
{
	t_lst	*curr;
	t_lst	*next;

	curr = *lst;
	while (curr)
	{
		next = curr->next;
		if (curr->format)
		{
			if (curr->format->flag)
				free(curr->format->flag);
			free(curr->format);
		}
		if (curr->arglist)
			free(curr->arglist);
		free(curr);
		curr = next;
	}
	*lst = NULL;
}
