/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftlib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenkira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 18:27:31 by ybenkira          #+#    #+#             */
/*   Updated: 2018/07/26 15:22:41 by ybenkira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTLIB_H
# define FTLIB_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isascii(int c);
int		ft_isalpha(unsigned char c);
int		ft_isdigit(unsigned char c);
int		ft_isalnum(unsigned char c);
int		ft_isprint(unsigned char c);
char	*ft_tolower(char *str);
char	*ft_toupper(char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *str);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcat(char *restrict s1, char *restrict s2);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
char	*ft_strlcat( char *restrict dst, const char *restrict src, size_t s);
char	*ft_strnew(size_t size);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char const *str);
void	ft_putendl(char const *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putendl_fd(char const *str, int fd);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
