/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:18:01 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/22 13:36:33 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
	unsigned char *byte;
	size_t	i;

	byte = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		byte[i] = c;
		i++;
	}
	return (s);
}