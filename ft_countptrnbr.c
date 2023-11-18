/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countptrnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggalon <ggalon@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:19:40 by ggalon            #+#    #+#             */
/*   Updated: 2023/11/18 23:28:21 by ggalon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countptrnbr(void *p)
{
	int	i;

	i = 2;
	if (!p)
		return (5);
	while ((size_t)p > 0)
	{
		p = (void *)((size_t)p / 16);
		i++;
	}
	return (i);
}
