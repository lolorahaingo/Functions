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

#include "ft_list.h"
#include <stdio.h>

char *ft_data_cpy(void *data)
{
	char *str_return;

	str_return = ((char *)data);
	return (str_return);
}

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list *tmp;

	//printf("%c\n", *((char *)data));
	//printf("%p : %c  ", &a, a);
	new_elem = ft_create_elem(ft_data_cpy(data));
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
