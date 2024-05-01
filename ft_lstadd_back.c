/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malourei <malourei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 00:25:57 by malourei          #+#    #+#             */
/*   Updated: 2024/04/22 00:25:59 by malourei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next != NULL)
		lst = &(*lst)->next;
	(*lst)->next = new;
}

/*
int main()
{
	t_list *root = NULL;

	t_list *no1 = ft_lstnew("lorem");
	t_list *no2 = ft_lstnew("ipsum");
	t_list *no3 = ft_lstnew("dolor");
	t_list *no4 = ft_lstnew("sit");

	ft_lstadd_back(&root, no1);
	ft_lstadd_back(&root, no2);
	ft_lstadd_back(&root, no3);
	ft_lstadd_back(&root, no4);

	t_list *curr = root;
	while (curr != NULL)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}
	return 0;
}
*/
