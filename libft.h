#ifndef LIBFT_H
# define LIBFT_H

int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);

char	ft_toupper(char c);
char	ft_tolower(char c);

int		ft_strlen(char c);
char	*ft_strchr(char *str, char c);
char	*ft_strrchr(char *str, char c);
int		ft_strncmp(char *s1, char *s2, int n);

void	ft_bzero(char *str, int n);
void	*ft_memset(void *b, int c, int len);
void	*ft_memchr(void *b, int c, int n);

#endif