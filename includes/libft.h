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

// Linked Lists

t_list		*ft_lstnew(void *content);
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void		ft_lstfree(t_list **lst);
t_list		*ft_lstlast(t_list *lst);

// Memory management

void		ft_bzero(void *dest, size_t n);
void		*calloc(size_t num, size_t size);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *dest, int x, size_t n);

// Printing functions

void		ft_putchar_fd(char c, int fd);
int			ft_putchar(char c);
void		ft_putstr_fd(char const *s, int fd);
int			ft_putstr(char const *s);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putendl(char const *s);
void		ft_putnbr_fd(long n, int fd);
int			ft_putnbr(long n);
int			ft_putunsigned(unsigned int n);
int			ft_putaddress(void *ptr);
int			ft_putbase(char *base, unsigned long long n);
#endif