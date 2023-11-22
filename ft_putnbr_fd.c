/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:05 by navarre           #+#    #+#             */
/*   Updated: 2023/11/22 13:23:26 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + 48, fd);
}

/*#include <stdio.h>

int main(void)
{
	ft_putnbr_fd(0, 1);
    printf("\n");
    ft_putnbr_fd(-42, 1);
    printf("\n");
	ft_putnbr_fd(-2147483648, 1);
    printf("\n");
	ft_putnbr_fd(2147483647, 1);
    printf("\n");
	ft_putnbr_fd(10, 1);

	return (0);
}*/