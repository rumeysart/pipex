/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rutatar <rutatar@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:42:15 by rutatar           #+#    #+#             */
/*   Updated: 2024/01/20 16:54:32 by rutatar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[], char *envp[])
{
	int fd[2];
	pid_t pid;

	if (ac != 5)
		return (write(1, "Wrong number of arguman", 23));
	pid = fork();
	if (pid < 0)
		perror();
	else if (pid == 0)
	{
		
	}
	else if(pid > 0)
	{

		
	}
	
}
