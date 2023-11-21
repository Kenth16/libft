/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:46 by navarre           #+#    #+#             */
/*   Updated: 2023/11/21 15:26:09 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    size_t  j;

    i = 0;
    if(!s2[i])
        return((char *)s1);
    while(s1[i] && i < n)
    {
        j = 0;
        while(s1[i + j] == s2[j] && s2[j] && (j + i) < n)
            j++;
        if(s2[j] == '\0')
            return((char *)s1 + i);
        i++;
    }
    return 0;
}