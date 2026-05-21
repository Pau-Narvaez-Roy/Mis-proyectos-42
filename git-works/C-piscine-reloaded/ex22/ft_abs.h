/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:57:21 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/19 16:14:42 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) (Value > 0 ? Value : -Value)
/*# define ABS(Value) (Value * (2 * (Value >= 0) - 1))*/

#endif