/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:39:32 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/23 17:12:48 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*byte01;
	unsigned char		*byte02;

	byte01 = (unsigned char *)s1;
	byte02 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (byte01[i] != byte02[i])
		{
			return (byte01[i] - byte02[i]);
		}
		i++;
	}
	return (0);
}
