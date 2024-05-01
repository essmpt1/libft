/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malourei <malourei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:10:57 by malourei          #+#    #+#             */
/*   Updated: 2024/05/01 11:33:21 by malourei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	tamanho;

	tamanho = ft_strlen(s);
	while (s[tamanho] != (char)c)
	{
		if (tamanho == 0)
			return (NULL);
		tamanho--;
	}
	return ((char *)&s[tamanho]);
}
/*

 int main()
{
	char *s = "Teste";
	char a = 'e';
	printf("FI: %s\n", strrchr(s, a));
	printf("FT: %s\n", ft_strrchr(s, a));
	return 0;
}
*/
