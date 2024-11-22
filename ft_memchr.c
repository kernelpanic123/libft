/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:39:44 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/22 15:34:24 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*byte;
	size_t			i;

	byte = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (byte[i] == (unsigned char)c)
		{
			return (&byte[i]);
		}
		i++;
	}
	return (NULL);
}
