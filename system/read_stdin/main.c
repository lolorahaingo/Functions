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
		printf("%c ->", *((char *)list->data));
		list = list->next;
	}
	printf("NULL");
}

int			main (void)
{
	print_list(get_stdin(0));
	return (0);
}
