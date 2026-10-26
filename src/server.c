/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabusala <rabusala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 16:56:19 by rabusala          #+#    #+#             */
/*   Updated: 2024/12/28 17:50:10 by rabusala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int sig)
{
	static int	bit;
	static char	arr[1024];
	static int	i;
	static int	index = 0;

	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		if (i == '\0')
		{
			arr[index] = '\0';
			ft_printf("%s\n", arr);
			index = 0;
		}
		else
			arr[index++] = i;
		bit = 0;
		i = 0;
	}
}

int	main(int c, char **v)
{
	pid_t	pid;

	(void) v;
	if (c == 1)
	{
		pid = getpid();
		ft_printf("my pid: %d\n", pid);
		ft_printf("waiting for the message\n");
		signal(SIGUSR1, handler);
		signal(SIGUSR2, handler);
		while (1)
		{
			pause();
		}
	}
	else
		ft_printf("Error\n");
	return (0);
}
