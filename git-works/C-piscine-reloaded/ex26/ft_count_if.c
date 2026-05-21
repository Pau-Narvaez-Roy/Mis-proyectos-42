/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 12:05:27 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/21 12:30:04 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	counted;

	counted = 0;
	while (*tab)
	{
		if ((*f)(*tab) == 1)
			counted++;
		tab++;
	}
	return (counted);
}
