/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccascava <ccascava@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 13:17:41 by ccascava          #+#    #+#             */
/*   Updated: 2026/10/07 13:13:17 by ccascava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	if (*lst == NULL)
	{
		return ;
	}
	temp = *lst;
	while (temp)
	{
		current = temp;
		temp = temp->next;
		del(current->content);
		free(current);
	}
	*lst = NULL;
}
