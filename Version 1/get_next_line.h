#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(char *s);
char 	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_read_and_save(int fd, char *save);
char	*ft_get_line(char *save);
char	*ft_save(char *save);
char 	*get_next_line(int fd);

#endif
