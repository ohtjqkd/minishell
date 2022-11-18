/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_bintree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingkim <mingkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:35:03 by bolee             #+#    #+#             */
/*   Updated: 2022/11/18 17:09:17 by mingkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../../include/minishell.h"

static int	set_bintree_type(int type)
{
	if (type == OR)
		return (TN_OR);
	else if (type == AND)
		return (TN_AND);
	else if (type == PIPE)
		return (TN_PIPE);
	else if (type == BRACKET)
		return (TN_BRACKET);
	else
		return (TN_WORD);
}

static void	upper_priority(t_bintree_node *node)
{
	if (g_global->tree->root->type >= node->type)
	{
		node->lc = g_global->tree->root;
		g_global->tree->root = node;
	}
}

static void	lower_priority(t_bintree_node *node)
{
	int				flag;
	t_tnType		node_type;
	t_bintree_node	*tmp;

	flag = 0;
	node_type = node->type;
	if (node_type == TN_OR || node_type == TN_AND \
			|| node_type == TN_PIPE)
		flag = 1;
	if (g_global->tree->root->type < node_type && flag)
	{
		node->lc = g_global->tree->root->rc;
		g_global->tree->root->rc = node;
	}
	else if (g_global->tree->root->type < node_type)
	{
		tmp = g_global->tree->root;
		while (tmp->rc)
			tmp = tmp->rc;
		tmp->rc = node;
	}	
}

void	set_bintree(t_doubly_list *lst, t_doubly_node *node)
{
	t_bintree_node	*bt_node;

	if (g_global->tree->root == NULL)
	{
		g_global->tree->root = create_bintree_node(node->token, \
									set_bintree_type(node->token->type));
		node = node->next;
	}
	if (node == lst->header.next)
		return ;
	bt_node = create_bintree_node(node->token, \
				set_bintree_type(node->token->type));
	upper_priority(bt_node);
	lower_priority(bt_node);
	set_bintree(lst, node->next);
}
