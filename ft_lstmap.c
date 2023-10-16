/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patata <patata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:00:49 by patata            #+#    #+#             */
/*   Updated: 2023/10/16 18:20:59 by patata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
			void (*del)(void *))
{
	t_list	*newlst;
	t_list	*iterator;
	t_list	*iterator2;

	iterator = lst;
	newlst = malloc(sizeof(t_list));
	if (!newlst)
		return (NULL);
	iterator2 = newlst;
	while (iterator)
	{
		iterator2->content = f(iterator->content);
		iterator2->next = malloc(sizeof(t_list));
		if (!iterator2->next)
			ft_lstclear(&iterator, del);
		iterator = iterator->next;
		iterator2 = iterator2->next;
	}
	return (newlst);
}
