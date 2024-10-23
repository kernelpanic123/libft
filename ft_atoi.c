/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:52:46 by abtouait          #+#    #+#             */
/*   Updated: 2024/10/23 12:10:41 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)

{
	int	nombre;
	int	signe;
	int	i;

	i = 0;
	signe = 1;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -signe;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nombre = nombre * 10 + (str[i] - '0');
		i++;
	}
	return (nombre * signe);
}

int	main(void)
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
}
