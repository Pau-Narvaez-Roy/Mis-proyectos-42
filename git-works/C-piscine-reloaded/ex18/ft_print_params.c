/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 13:20:36 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/19 15:46:44 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		ft_putchar(argv[j][i++]);
		if (argv[j][i] == '\0')
		{
			ft_putchar('\n');
			j++;
			i = 0;
		}
	}
	return (0);
}
