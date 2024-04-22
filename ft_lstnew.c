/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malourei <malourei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:12:20 by malourei          #+#    #+#             */
/*   Updated: 2024/04/19 19:13:03 by malourei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
    t_list *new_list;

    new_list = malloc(sizeof(t_list));
    if (!new_list) {
        return (NULL);
    }
    new_list->next = NULL;
    new_list->content = content;
    return (new_list);
}
/*
int main()
{
    t_list *root = NULL;
    char c[] = "Teste";

    root = ft_lstnew((char *)c);
    t_list *curr = root;
    while (curr != NULL)
    {
        printf("%s\n", (char *)curr->content);
        curr = curr->next;
    }
    return 0;
}
*/