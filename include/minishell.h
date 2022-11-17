/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingkim <mingkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:08:00 by mingkim           #+#    #+#             */
/*   Updated: 2022/11/17 17:45:58 by mingkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "./builtin.h"
# include "./utils.h"
# include "./core.h"
# include "./doublylist.h"
# include "./executor.h"
# include "./hashtable.h"
# include "./tokenizer.h"
# include "./struct.h"
# include "./base.h"
# include "./error.h"
# include "./lexer.h"
# include "./global.h"
# include "./bintree.h"

t_global		*g_global;

#endif
