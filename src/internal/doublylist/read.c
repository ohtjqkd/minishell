/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingkim <mingkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:16:11 by mingkim           #+#    #+#             */
/*   Updated: 2022/11/17 20:28:09 by mingkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/minishell.h"

t_doubly_node	*get_node_by_index(t_doubly_list *lst, size_t idx)
{
	size_t			count;
	t_doubly_node	*node;

	if (!lst || is_list_empty(lst) || lst->len <= idx)
		exit(1);
	count = -1;
	node = lst->header.next;
	while (++count < idx)
		node = node->next;
	return (node);
}
