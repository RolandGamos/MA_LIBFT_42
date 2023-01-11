#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# include "checkers/checkers.h"
# include "converters/converters.h"
# include "io/io.h"
# include "memory/memory.h"
# include "strings/strings.h"


size_t		ft_strlen(const char *s);

char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlcat(char *dest, const char *src, size_t dstsize);
char		*ft_strnstr(const char *big, const char *little, size_t len);

char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
void		ft_free_split(char **tabword);

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strncat(char *dest, char *src, unsigned int n);


#endif
