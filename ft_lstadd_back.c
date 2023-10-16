/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patata <patata@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:26:10 by patata            #+#    #+#             */
/*   Updated: 2023/10/16 17:38:38 by patata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *lstnew)
{
	t_list	*lst_ptr;

	if (!(*lst))
		return ;
	lst_ptr = (*lst);
	while (lst_ptr->next)
		lst_ptr = lst_ptr->next;
	lst_ptr->next = lstnew;
}
