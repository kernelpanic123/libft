/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:13:36 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/17 18:32:29 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{

	size_t					i;
	unsigned char		*byte01;
	const unsigned char	*byte02;

	byte01 = (unsigned char *)dest;
	byte02 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		byte01[i] = byte02[i];
		i++;
	}
	return (byte01);
}
