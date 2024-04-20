/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malourei <malourei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:10:57 by malourei          #+#    #+#             */
/*   Updated: 2024/04/17 00:01:09 by malourei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	tamanho;

	tamanho = ft_strlen(s);
	if (c == '\0')
		return ((char *) &s[tamanho]);
	while (tamanho > 0)
	{
		tamanho--;
		if (s[tamanho] == (char)c)
			return ((char *)&s[tamanho]);
	}
	return (NULL);
}
