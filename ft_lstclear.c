/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malourei <malourei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:49:38 by malourei          #+#    #+#             */
/*   Updated: 2024/04/22 11:49:39 by malourei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*curr;

	if (!lst || !del)
		return ;
	curr = *lst;
	while (curr != NULL)
	{
		next = curr->next;
		if (curr->content != NULL)
			(del)(curr->content);
		free(curr);
		curr = next;
	}
	*lst = NULL;
}
