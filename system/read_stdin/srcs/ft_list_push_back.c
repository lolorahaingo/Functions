/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:22:52 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/25 14:48:22 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*tmp;

	new_elem = ft_create_elem(data);
	if (*begin_list == NULL)
	{
		*begin_list = new_elem;
		return ;
	}
	tmp = *begin_list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_elem;
}
