/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriele <gvirga@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/12 23:07:55 by gabriele          #+#    #+#             */
/*   Updated: 2018/10/12 23:18:03 by gabriele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(void)
{
	int		fd;
	char 	files[] = {
		"test.txt", "test.txt", "test.txt", "test.txt", "test.txt",
		"test.txt", "test.txt", "test.txt", "test.txt", "test.txt",
		"test.txt", "test.txt", "test.txt", "test.txt", "test.txt",
		"test.txt", "test.txt", "test.txt", "test.txt", "test.txt"
	};
	int		i;
	char	*line;

	i = 0;
	while (i < 20)
	{
		fd = open(files[i], O_RDONLY);
		u = 0;
		while (get_next_line(fd, &line) > 0)
		{
			free(line);
			u++;
			if (u == 50)
				close(fd);
		}
		i++;
	}
	return (0);
}
