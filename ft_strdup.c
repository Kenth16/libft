/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:22 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:02:23 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    // dupliquer une chaine sur une autre malloc juste avant
    char    *dest;
    size_t  i;

    i = 0;
    dest = malloc((ft_strlen(str) + 1) * sizeof(char));
    if(!dest)
        return NULL;
    while(str[i])
    {
        dest[i] = str[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
    }