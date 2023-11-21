/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:56 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:02:56 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;

    i = 0;
    if(ft_strlen(s) < start)
        len = 0;
    else if(ft_strlen(s) < (start + len))
        len = ft_strlen(s) - start;
    str = (char *)malloc(sizeof(*s) * (len + 1));
    if(!str)
        return 0;
    while(i < len)
        str[i++] = s[start++];
    str[i] = '\0';
    return(str);
}