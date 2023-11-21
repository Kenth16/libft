/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:32 by navarre           #+#    #+#             */
/*   Updated: 2023/11/21 15:41:44 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnlen(char *s, size_t n)
{
    size_t  i;

    i = 0;
    if(n == 0)
        return 0;
    while (s[i])
        i++;
    return (i);
    
}

size_t  ft_strlcat(char *dest, const char *src, size_t n)
{
    size_t  i;
    size_t  dest_len = ft_strnlen(dest, n);

    i = 0;
    if (dest_len >= n)
        return (n + ft_strlen(src));
    while ((dest_len + i) < n - 1 && src[i])
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (dest_len + ft_strlen(src));
}