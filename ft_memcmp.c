/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:01:43 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:01:44 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    // compare s1 et s2 sur n taille
    while(i < n)
    {
        if(((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
            return (((const unsigned char *)s1)[i] - ((const unsigned char *)s2)[i]);
        i++;
    }
    return 0;
}