/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:01:29 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:38:28 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *s;

    s = (t_list *)malloc(sizeof(t_list));
    if (!s)
        return NULL;
    s->content = content;
    s->next = NULL;
    return (s);   
}