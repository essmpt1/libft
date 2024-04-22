/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malourei <malourei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 22:54:05 by malourei          #+#    #+#             */
/*   Updated: 2024/04/21 22:54:08 by malourei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst != NULL)
    {
        i++;
        lst = lst->next;
    }
    return (i);
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
    printf("%d\n", ft_lstsize(curr));
    while (curr != NULL)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }
    return 0;
}
 */