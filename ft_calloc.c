/* ************************************************************************** */
/*												                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:59:13 by navarre           #+#    #+#             */
/*   Updated: 2023/11/20 15:36:18 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t n)
{
	void	*s;
	size_t	tot;

	tot = nmemb * n;
	if (nmemb != 0 && tot / nmemb != n)
		return (NULL);
	s = malloc(tot);
	if (!s)
		return (0);
	ft_memset(s, 0, tot);
	return (s);
}
