/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_pipes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bolee <bolee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:27:24 by bolee             #+#    #+#             */
/*   Updated: 2022/12/13 14:27:24 by bolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/minishell.h"

t_tType	verify_pipe(char *str)
{
	if (str[0] == '|' && str[1] && str[1] == str[0])
		return (OR);
	if (str[0] == '|')
		return (PIPE);
	exit_error("FUCK YOU");
	return (NONE);
}
