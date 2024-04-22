/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malourei <malourei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:25:47 by malourei          #+#    #+#             */
/*   Updated: 2024/04/17 19:07:10 by malourei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s, char c)
{
	int		i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		while (s[i] == c && s[i + 1] == c)
			i++;
		i++;
	}
	return (count);
}

static void	ft_split_free(char **strs, size_t len)
{
    size_t  i;

    i = 0;
    while (len > i)
    {
        free(strs[i]);
        i++;
    }
    free(strs);
}

static char	**ft_split_help(char **strs, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	j = 0;
	while (k < ft_count(s, c)) 
	{
		while (s[i] == c && s[i] != '\0')
		{
			i++;
			j = i;
		}
		while (s[i] != c && s[i] != '\0')
			i++;
		strs[k] = ft_substr(s, j, (i - j));
		while (s[i] == c)
			i++;
		j = i;
		k++;
	}
	strs[k] = NULL;
    return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	len_s;

	if (s == NULL)
		return (NULL);
	len_s = ft_count(s, c);
	strs = malloc(sizeof(char *) * (len_s + 1));
	if (!strs)
		return (NULL);
	ft_split_help(strs, s, c);
    if (!strs)
    {
        ft_split_free(strs, len_s);
        return (NULL);
    }
	return (strs);
}
