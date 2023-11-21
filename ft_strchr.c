/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:16 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:02:17 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    int  i;

    i = 0;
    while(str[i] && str[i] != (char)c)
        i++;
    if(str[i] == '\0' && str[i] != (char)c)
        return 0;
    return((char *)str + i);
}