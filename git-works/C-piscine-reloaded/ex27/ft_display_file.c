/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:38:36 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/21 15:27:45 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_read(char *str)
{
	char	c[1];
	int		fd;

	fd = open(str, O_RDONLY);
	if (fd < 0)
	{
		ft_putstr("Cannot read file.\n");
		close(fd);
		return ;
	}
	while (read(fd, c, 1))
		write(1, &c[0], 1);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	ft_read(argv[1]);
	return (0);
}
