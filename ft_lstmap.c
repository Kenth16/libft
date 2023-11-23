/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: navarre <navarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:01:25 by navarre           #+#    #+#             */
/*   Updated: 2023/11/22 19:23:34 by navarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*tmp;

	lst_new = NULL;
	tmp = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, tmp);
		lst = lst->next;
	}
	return (lst_new);
}

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*ret;

// 	lst = ft_lstnew((void *)"Bonjour");
// 	if (!lst)
// 		return (EXIT_FAILURE);
// 	ft_lstadd_back(&lst, ft_lstnew((void *)"42"));
// 	ft_lstadd_back(&lst, ft_lstnew((void *)"School"));

// 	ret = ft_lstmap(lst, (void *)ft_strdup, free);
// 	if (!ret)
// 		return (EXIT_FAILURE);

// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}

// 	while (ret)
// 	{
// 		printf("%s\n", (char *)ret->content);
// 		ret = ret->next;
// 	}

// 	return (EXIT_SUCCESS);
// }