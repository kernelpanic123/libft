/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 02:31:06 by abtouait          #+#    #+#             */
/*   Updated: 2024/10/23 12:40:32 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

int	ft_isdigit(int c);
size_t	ft_strlen(const char *s);
int	ft_atoi(const char *str);

#endif
