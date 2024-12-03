/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:43:57 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/30 16:34:41 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*byte01;
	const unsigned char	*byte02;

	byte01 = (unsigned char *)dest;
	byte02 = (unsigned char *)src;
	if (byte01 < byte02)
	{
		i = 0;
		while (i < n)
		{
			byte01[i] = byte02[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			byte01[i] = byte02[i];
		}
	}
	return (dest);
}
