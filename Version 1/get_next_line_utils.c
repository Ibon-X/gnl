/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipresno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:00:22 by ipresno-          #+#    #+#             */
/*   Updated: 2022/10/18 17:44:15 by ipresno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, char c)
{
	int	i;

	if (!s)
		return (0);
	if (c == '\0')
		return ((char *) &s[ft_strlen(s)]);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}	

char	*ft_strjoin(char *s1, char *s2)
{
	char		*new;
	size_t		i;
	size_t		j;

	if (!s1)
	{
		s1 = malloc(sizeof(*s1) * 1);
		s1[0] = '\0';
	}
	if (!s2)
		return (s1);
	new = malloc(sizeof(*new) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
		return (NULL);
	i = -1;
	if (s1)
		while (s1[++i])
			new[i] = s1[i];
	j = 0;
	while (s2[j])
		new[i++] = s2[j++];
	new[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free (s1);
	return (new);
}
