/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malourei <malourei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 23:00:22 by malourei          #+#    #+#             */
/*   Updated: 2024/04/21 23:17:02 by malourei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*
int main()
{
	t_list *root = NULL;
	t_list *root2 = NULL;

	t_list *no1 = ft_lstnew("Teste1");
	t_list *no2 = ft_lstnew("Teste2");
	t_list *no3 = ft_lstnew("Teste3");
	t_list *no22 = ft_lstnew("Teste22");
	t_list *no33 = ft_lstnew(NULL);

	ft_lstadd_front(&root, no1);
	ft_lstadd_front(&root, no2);
	ft_lstadd_front(&root, no3);
	ft_lstadd_front(&root2, no22);
	ft_lstadd_front(&root2, no33);

	t_list *curr = root;
	//printf("Tamanho: %d\n", ft_lstsize(curr));

	printf("Ultimo no: %s\n", (char *)ft_lstlast(root2)->content);
	while (curr != NULL)
	{
		printf("%s\n", (char *)curr->content);
		curr = curr->next;
	}
	return 0;
}
*/
