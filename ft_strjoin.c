/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:01:31 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/26 17:34:48 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*mot;

	i = 0;
	j = 0;
	mot = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));

	if (!mot)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		mot[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		mot[i + j] = s2[j];
		j++;
	}
	return (mot);
}
