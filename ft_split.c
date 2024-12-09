/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 12:57:40 by abtouait          #+#    #+#             */
/*   Updated: 2024/12/09 01:12:53 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int nbr_mots(char const *s, char c)
{
	size_t	i;
	size_t	mot;
	size_t	in_word;

	i = 0;
	mot = 0;
	in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			mot++;
		}
		i++;
	}
	return (mot);
}