/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 18:02:11 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/23 20:17:16 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

void		*ft_memcpy(void *dest, void *src, int size)
{
	int i;
	char *cdest;
	char *csrc;
	
	i = -1;
	dest = (char *)malloc(sizeof(char) * size);
	cdest = (char *)dest;
	csrc = (char *)src;
	while (++i < size)
		cdest[i] = csrc[i];
	return (dest);
}

t_list		*ft_create_elem(void *data)
{
	t_list	*elem;
	void *dest;

	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	elem->data = ft_memcpy(&dest, data, 1);;
	elem->next = NULL;
	return (elem);
}
