/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 11:45:10 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/14 11:45:10 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stddef.h>
# include <mm_malloc.h>
# include <limits.h>
# include <unistd.h>

/* libc */
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
/**
 * @brief	The length of given string.
 * @return	The length of the string.
 * 			NULL if nothing given.
 * @param	char	*str : the string to measure.
 */
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, size_t c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(size_t c);
int		ft_tolower(size_t c);
/**
 * @brief	Searchs in given string for the first aparition
 * 			of searched_char.
 * @return	Pointer of string from first aparition of seached_char
 * 			in string given.
 * 			NULL if any error or not found.
 * @param	char	*string : where we will search.
 * @param	int		searched_char : the char we are searching for.
 */
char	*ft_strchr(const char *s, size_t c);
char	*ft_strrchr(const char *s, size_t c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(void *s, size_t c, size_t n);
int		ft_memcmp(void *s1, void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
/**
 * @brief	Given a string, it takes len characters from the position
 * 			given.
 * @return	A substring of the given string with the parameters given.
 * 			NULL if any error.
 * @param	char	*s : The original string to work.
 * @param	size_t	start : The position where to start the substring.
 * @param	size_t	len : The desired length of the substring.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);
/**
 * @brief	Join two strings into one.
 * @return	String resulted from joining the 2 given strings.
 * 			NULL if error.
 * @param	char	*s1 : the first string.
 * @param	char	*s2 : the string to join to s1.
 */
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned
				int, char));
void	ft_striteri(char *s, void (*f)(unsigned int,
				char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// --------------------#BONUS#--------------------
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *lstnew);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *lstnew);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
			void (*del)(void *));

#endif