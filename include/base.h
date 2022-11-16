/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mingkim <mingkim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:12:59 by mingkim           #+#    #+#             */
/*   Updated: 2022/11/10 20:28:48 by mingkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

/* standard header */
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <signal.h>
# include <dirent.h>
# include <fcntl.h>
# include <stdarg.h>

/* GNU readline header */
# include <readline/readline.h>
# include <readline/history.h>

/* libft header */
# include "libft/libft.h"

/* macros */
# define TRUE 1
# define FALSE 0
# define MAGIC_NUMBER 5381

/* external variable for environment variables */
extern char	**environ;

#endif