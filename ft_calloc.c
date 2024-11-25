/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:50:02 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/23 19:04:53 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t taille)
{
	void	*ptr;

	ptr = malloc(n * taille);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n * taille);
	return (ptr);
}
