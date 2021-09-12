#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n);
void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strrchr(const char *s, int c);
void	ft_bzero (void *s, size_t n);
char *strrchr(const char *s, int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlen(const char *s);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char *ft_strnstr(const char	*str, const char *to_find, size_t len);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strdup(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int				ft_atoi(const char *nptr);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char    *ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
#endif
