/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <tedelin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:42:47 by tedelin           #+#    #+#             */
/*   Updated: 2023/04/04 13:19:04 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_pwd_cmd(t_cmd *cmd)
{
	if (t_lstsize(&cmd->arg) > 1)
	{
		printf("minishell: pwd: too many arguments\n");
		return ;
	}
	ft_pwd(0);
}

char	*ft_pwd(int opt)
{
	char	*pwd;

	pwd = getcwd(NULL, 0);
	if (opt == 1)
		return (pwd);
	printf("%s\n", pwd);
	free(pwd);
	return (NULL);
}
