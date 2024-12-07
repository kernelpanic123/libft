/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:20:18 by abtouait          #+#    #+#             */
/*   Updated: 2024/12/07 12:45:56 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *f, const char *a, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (a[i] == '\0')
		return ((char *)f);
	while (f[i] != '\0' && i < n)
	{
		j = 0;
		while (f[i + j] == a[j] && i + j < n)
			j++;
		if (a[j] == '\0')
			return ((char *)&f[i]);
		i++;
	}
	return (NULL);
}
