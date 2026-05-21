/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:54:37 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/19 15:55:06 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*copy;
	int	i;

	i = 0;
	copy = (int *) malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	if (!copy)
		return (NULL);
	while ((min + i) < max)
	{
		copy[i] = min + i;
		i++;
	}
	return (copy);
}
