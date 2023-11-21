/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:29 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:02:29 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  tot;
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    tot = ft_strlen(s1) + ft_strlen(s2) + 1;
    str = malloc(sizeof(char) * tot);
    if(!str)
        return 0;
    while(s1[i])
    {
        str[i] = s1[i];  
        i++;
    }
    while(s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return(str);
}