/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:58:53 by fepennar          #+#    #+#             */
/*   Updated: 2025/01/14 14:34:24 by fepennar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (s[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	dest[i] = '\0';
	while (i--)
		dest[i] = s[i];
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mstr;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	mstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!mstr)
		return (NULL);
	while (len)
	{
		mstr[i] = s[start];
		i++;
		start++;
		len--;
	}
	mstr[i] = '\0';
	return (mstr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mstr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	mstr = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!mstr)
		return (NULL);
	while (s1[i])
	{
		mstr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		mstr[i] = s2[j];
		i++;
		j++;
	}
	mstr[i] = '\0';
	return (mstr);
}
