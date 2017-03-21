/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 10:31:40 by bbrunell          #+#    #+#             */
/*   Updated: 2016/02/09 11:51:25 by bbrunell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>
# define BUFF_SIZE 32
# define BUFFER 5000

typedef struct		s_buffer
{
	char			str_buff[BUFFER];
	int				buff;
	int				nbr_write;
}					t_buffer;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen(const char *s);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s, unsigned int start,
size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_atoi(const char *str);
int					ft_strcmp(const char *s1, const char *s2);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
long int			ft_verifint(const char *str);
char				**ft_strsplit(char const *s, char c);
void				ft_strdel(char **as);
int					get_next_line(int const fd, char **line);
int					ft_check_end(char *s1);
void				*ft_memalloc(size_t size);
char				*ft_strdup(const char *s1);
void				ft_bzero(void *s, size_t n);
char				*ft_strstr(const char *s1, const char *s2);
void				ft_putendl(char const *s);
char				*ft_itoll(long long int n);
char				*ft_free_join(char *s1, char *s2);
char				*ft_free_join_char(char *s1, char *s2, char c);
int					ft_strlen_char(char *str, char c);
void				free_tab_str(char **tab);
char				*ft_free1_join_char(char *s1, char *s2, char c);
char				*ft_free_njoin(char **str, int nbr_str, int *str_free);
void				buff_join(char *str, t_buffer *b);
void				buff_join_nstr(char **str, t_buffer *b,
int nbr_str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					size_long_long(long long int n);
void				print_nchar(char c, int size);
void				ft_putendl_fd(char const *s, int fd);
void				buff_sub_join(const char *str, t_buffer *b, int start,
int len);
void				buff_join_char(char c, t_buffer *b);
void				buff_free_njoin(char **str, t_buffer *b, int nbr_str,
int *str_free);
int					ft_toupper(int c);
int					ft_tolower(int c);
char				*ft_strtrim(char const *s);
char				*ft_strstr(const char *s1, const char *s2);
char				**ft_strsplit(char const *s, char c);
char				*ft_strrev(char *str);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void (*f)(char *));
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strcpy(char *dst, const char *src);
void				ft_strclr(char *s);
char				*ft_strchr(const char *s, int c);
char				*ft_strcat(char *s1, const char *s2);
int					*ft_range(int min, int max);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_print_bits(unsigned char octet);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				ft_memdel(void **ap);
void				*ft_memcpy(void *dst, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
char				*ft_itoa(int n);
int					ft_iterative_power(int nb, int power);
int					ft_isprint(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
void				ft_is_negative(int n);

#endif
