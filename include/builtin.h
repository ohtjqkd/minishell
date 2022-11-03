/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../../../include/minishell.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingkim <mingkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:27:24 by mingkim           #+#    #+#             */
/*   Updated: 2022/10/18 12:24:32 by mingkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTIN_H
# define BUILTIN_H

# include "./struct.h"

/* in ../src/internal/builtin/ */
/* cd.c */
void			_invalid_err_cd(const char *str);
int				builtin_cd(char *directory);
/* echo.c */
int				builtin_echo(const char *str, int fd, int flag);
/* pwd.c */
int				builtin_pwd(void);
/* env.c */
void			builtin_env(t_doubly_list *lst);

#endif