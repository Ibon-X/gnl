#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;
	
	i = 1;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int i;
	
	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	
	while (s[i])
	{	
		if (s[i] == c)
			return ((char *)&s[i]); 
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char 	*new;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		si = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	new = malloc(sizeof(*new) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = 0;
	if (s1)
	{	
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[ft_strlen(s1) + ft_strlen(s2)] ='\0';
	free (s1);
	return (new);
}
