/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 18:37:48 by navarre           #+#    #+#             */
/*   Updated: 2023/11/21 18:38:46 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	set_is_good(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (set_is_good(set, s1[start]))
		start++;
	while (start < end && set_is_good(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, (end - start)));
}
/*#include<stdio.h>

int main()
{
	char	*s2 = "xxx  xxx";
	printf("%ld\n", ft_strlen(s2));
	printf("%s\n", ft_strtrim(s2, " x"));
}*/