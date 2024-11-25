/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 13:10:21 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/23 17:12:48 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char *byte;

	byte = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		byte[i] = '\0';
		i++;
	}
}