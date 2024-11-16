/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:39:32 by abtouait          #+#    #+#             */
/*   Updated: 2024/11/16 19:43:46 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*byte01;
	unsigned char	*byte02;

	i = 0;
	byte01 = (unsigned char *)&s1;
	byte02 = (unsigned char *)&s2;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && byte01[i] == byte02[i])
	{
		i++;
	}
	if (byte01[i] != byte02[i])
	{
		return (byte01[i] - byte02[i]);
	}
	return (0);
}

int main(int argc, char	**argv)
{
	if(argc != 4)
	{
		write(1, "\n", 1);
		return(0);
	}
	if (ft_memcmp(argv[1], argv[2], *argv[3]) == 0)
		write(1, "ici", 3);
}