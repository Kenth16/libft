/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:58:12 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:36:48 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int neg;
    int res;
    int i;

    i = 0;
    neg = 1;
    res = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * neg);
}

/*#include<stdio.h>
int main()
{
    printf("%d\n", ft_atoi("+1"));
    printf("%d\n", ft_atoi("+42lyon"));
    printf("%d\n", ft_atoi("+101"));
    printf("%d\n", ft_atoi("+-4qsd-"));

}*/
