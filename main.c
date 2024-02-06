/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:45:08 by elsikira          #+#    #+#             */
/*   Updated: 2024/02/06 13:32:56 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	id;

	id = fork();
	if (id == 0)
		printf("Hello World from the child process id: %d\n", id);
	else
		printf("Hello World from the main process id: %d\n", id);
	return (0);
}

// id of the child process is 0.
// id of the parent process is an int different than 0.