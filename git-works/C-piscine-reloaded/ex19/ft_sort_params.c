/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:29:24 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/21 15:18:56 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		j;

	j = 1;
	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			temp = argv[j];
			argv[j] = argv[j + 1];
			argv[j + 1] = temp;
			j = 0;
		}
		j++;
	}
	j = 1;
	while (j < argc)
	{
		while (*argv[j])
			ft_putchar(*argv[j]++);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
