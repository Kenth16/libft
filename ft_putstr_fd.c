/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:09 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:02:09 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
}