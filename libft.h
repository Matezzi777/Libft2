#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h> //write()
# include <stdlib.h> //malloc()
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

// PART 1 - Libc functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);				//MISSING
char	*ft_strnstr(const char *big, const char *little, size_t len);		//MISSING
void	*ft_memchr(const void *s, int c, size_t n);							//MISSING
int		ft_memcmp(const void *s1, const void *s2, size_t n);				//MISSING
void	*ft_memcpy(void *dest, const void *src, size_t n);					//MISSING
void	*ft_memmove(void *dest, const void *src, size_t n);					//MISSING
void	*ft_memset(void *s, int c, size_t n);								//MISSING
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);

// PART 2 : Additional functions
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	**ft_split(const char *s, char c);									//MISSING
char	*ft_strjoin(const char *s1, const char *s2);						//MISSING
char	*ft_strtrim(const char *s1, const char *set);						//MISSING
char	*ft_substr(const char *s, unsigned int start, size_t len);			//MISSING
void	ft_striteri(char *s, void (*f)(unsigned int, char *));				//MISSING
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));			//MISSING

// BONUS PART :
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));						//MISSING
void	ft_lstclear(t_list **lst, void (*del)(void*));						//MISSING
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));	//MISSING

#endif