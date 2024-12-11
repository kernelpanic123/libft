/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:57:40 by abtouait          #+#    #+#             */
/*   Updated: 2024/12/11 15:19:27 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_mots(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	size_t	i;
	size_t	j;
	size_t	wordcount;
	size_t	wordlen;

	wordcount = nbr_mots(s, c);
	new_str = (char **)malloc(sizeof(char *) * (wordcount + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < wordcount)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		wordlen = 0;
		while (s[j + wordlen] != '\0' && s[j + wordlen] != c)
			wordlen++;
		new_str[i] = ft_substr(s, j, wordlen);
		i++;
		j = j + wordlen;
	}
	new_str[i] = NULL;
	return (new_str);
}
