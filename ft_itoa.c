/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:39:33 by navarre           #+#    #+#             */
/*   Updated: 2023/11/22 11:40:40 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_for_malloc(int n)
{
	size_t	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	is_negative(int n)
{
	if (n <= 0)
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	count;
	size_t	i;
	long	n2;

	n2 = n;
	count = count_for_malloc(n2);
	i = count + is_negative(n2);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i] = '\0';
	if (n2 == 0)
		str[0] = '0';
	if (n2 < 0)
	{
		str[0] = '-';
		n2 *= -1;
	}
	while (count-- > 0)
	{
		str[--i] = (n2 % 10) + '0';
		n2 = n2 / 10;
	}
	return (str);
}

/*int main()
{
	printf("%s\n", ft_itoa(-2147483648));
    printf("%s\n", ft_itoa(2147483647));    
    printf("%s\n", ft_itoa(-42));
    printf("%s\n", ft_itoa(0));    
    printf("%s\n", ft_itoa(1));
}*/
