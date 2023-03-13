/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrilindeza <henrilindeza@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:34:20 by henrilindez       #+#    #+#             */
/*   Updated: 2023/03/13 19:22:07 by henrilindez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*act;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		act = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = act;
	}
}
