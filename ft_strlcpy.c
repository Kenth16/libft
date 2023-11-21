/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:35 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:02:35 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t n)
{
    // copie src dans dest garantie que n -1 sera copier
    size_t  i;

    i = 0;
    if(n == 0)
        return(ft_strlen(src));
    while(i < n - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(ft_strlen(src));
    // retour i car nombre de caractères copier
}