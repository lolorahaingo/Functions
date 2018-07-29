/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 14:27:23 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/25 14:48:59 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void		print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%p ->", ((int *)list->data));
		list = list->next;
	}
	printf("NULL");
}

int			main (void)
{
	t_list *begin_list = get_stdin(0);
	print_list(begin_list);
	return (0);
}
