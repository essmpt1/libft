/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malourei <malourei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:17:32 by malourei          #+#    #+#             */
/*   Updated: 2024/04/21 22:17:34 by malourei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst && new) {
        new->next = *lst;
        *lst = new;
    }
}

/*
int main()
{
    t_list *root = NULL;

    t_list *no1 = ft_lstnew("Teste1");
    t_list *no2 = ft_lstnew("Teste2");
    t_list *no3 = ft_lstnew("Teste3");

    ft_lstadd_front(&root, no1);
    ft_lstadd_front(&root, no2);
    ft_lstadd_front(&root, no3);

    t_list *curr = root;
    while (curr != NULL)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }
    return 0;
}
 */