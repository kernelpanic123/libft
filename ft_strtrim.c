/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 14:59:44 by abtouait          #+#    #+#             */
/*   Updated: 2024/12/05 23:08:01 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*convert(char const *s1, char const *set, int j, int h)
{
	int		i;
	char	*new_str;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1[j])
		{
			j--;
			i = 0;
		}
		else
			i++;
	}
	new_str = malloc((j - h + 2) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (h <= j)
		new_str[i++] = s1[h++];
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	h;
	size_t	i;

	if (s1 == NULL)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	j = ft_strlen(s1) - 1;
	h = 0;
	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1[h])
		{
			h++;
			i = 0;
		}
		else
			i++;
	}
	if (h == ft_strlen(s1))
		return (ft_strdup(""));
	return (convert(s1, set, j, h));
}
