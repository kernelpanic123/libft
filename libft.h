/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abtouait <abtouait@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 02:31:06 by abtouait          #+#    #+#             */
/*   Updated: 2024/10/28 00:46:29 by abtouait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

int	ft_isdigit(int c);
size_t	ft_strlen(const char *s);
int	ft_atoi(const char *str);
int	ft_isalpha(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
char ft_strchr(const char *str, int search_str);

#endif
