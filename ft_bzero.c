/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:59:05 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:36:31 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    // remplir de 0 les n octet de s
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = 0;
        i++;
    }
}
