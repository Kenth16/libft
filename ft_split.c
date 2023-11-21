/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:02:13 by navarre           #+#    #+#             */
/*   Updated: 2023/11/21 18:45:55 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

/*void	write_word(char *dest, char const *src, char c, size_t i)
{
	size_t  j;

	j = 0;
	while(src[i] != c)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
}
*/
void	write_table(char **tab, char const *s, char c)
{
	size_t	compteur;
	size_t	i;
	size_t	len_word;

	compteur = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			len_word = 0;
			while (s[i + len_word] != c && s[i + len_word])
				len_word++;
			tab[compteur] = ft_substr(s, i, len_word);
			i = i + len_word;
			compteur++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**tab;

	if (!s)
		return (0);
	count = ft_count_words(s, c) + 1;
	tab = (char **)malloc(sizeof(char *) * count);
	if (!tab)
	{
		free(tab);
		return (0);
	}
	write_table(tab, s, c);
	tab[count - 1] = '\0';
	return (tab);
}
