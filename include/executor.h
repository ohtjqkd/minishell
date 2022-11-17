/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executor.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingkim <mingkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:27:24 by mingkim           #+#    #+#             */
/*   Updated: 2022/11/17 16:47:23 by mingkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTOR_H
# define EXECUTOR_H

# include "./struct.h"

/* executor.c */
int		executor(char *cmd);
int		serve_status(char *cmd);

/* bracket.c */
int		execute_bracket(t_bintree_node *root);
#endif