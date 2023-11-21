/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:01 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:02:02 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
    size_t  i;

    i = 0;
    while(s[i])
    {
        write(fd, &s[i], 1);
        i++;
    }
    write(fd, "\n", 1);
}