/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moassi <moassi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:48:55 by moassi            #+#    #+#             */
/*   Updated: 2024/05/15 22:48:55 by moassi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
// for testing
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// Characters

int			ft_isdigit(int arg);
int			ft_isalpha(int arg);
int			ft_isalnum(int arg);
int			ft_isascii(int arg);
int			ft_isprint(int arg);
int			ft_isupper(int arg);
int			ft_islower(int arg);
int			ft_isspace(int arg);
int			ft_toupper(int ch);
int			ft_tolower(int ch);

// Integer Conversion

int			ft_atoi(const char *str);
char		*ft_itoa(int n);

#endif