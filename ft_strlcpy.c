/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 20:47:17 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/23 17:12:48 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size )
{
	size_t	i;

	i = 0;
	if (src[i] == '\0')
	{
		dest[i] = '\0';
		return (ft_strlen(src));
	}
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] != '\0' && size > i + 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
