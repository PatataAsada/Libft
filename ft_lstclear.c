/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patata <patata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:41:04 by patata            #+#    #+#             */
/*   Updated: 2023/10/16 17:50:41 by patata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*lst))
		return ;
	tmp = (*lst);
	while (tmp)
	{
		tmp2 = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = tmp2;
	}
	(*lst) = NULL;
}
