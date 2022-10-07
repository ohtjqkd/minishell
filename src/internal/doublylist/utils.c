/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingkim <mingkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:35:19 by mingkim           #+#    #+#             */
/*   Updated: 2022/10/07 14:09:10 by mingkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/minishell.h"

int	is_list_empty(t_doubly_list *lst)
{
	if (lst->len == 0)
		return (TRUE);
	return (FALSE);
}

void	display_list(t_doubly_list *lst)
{
	size_t			count;
	t_doubly_node	*node;

	if (!lst || is_list_empty(lst))
		return ;
	count = -1;
	node = lst->header.next;
	while (++count < lst->len)
	{
		printf("doubly list node, index of %zd\n", count);
		printf("token value = %s\n", node->token->value);
		switch_type(node->token->type);
		node = node->next;
	}
}

t_type	switch_type(t_type type)
{
	if (type == T_NULL)
		return (T_NULL);
	else if (type == T_WORD)
		return (T_WORD);
	else if (type == T_PIPE)
		return (T_PIPE);
	else if (type == T_REDIRECT)
		return (T_REDIRECT);
	else if (type == T_DOUBLE_QUOTES)
		return (T_DOUBLE_QUOTES);
	else
		return (0);
}

t_doubly_node	*find_node(t_doubly_list *lst, char *str)
{
	t_doubly_node	*node;

	node = lst->header.next;
	while (node != NULL)
	{
		if (!ft_strncmp(node->token->value, str, ft_strlen(node->token->value)))
			return (node);
		node = node->next;
	}
	return (NULL);
}