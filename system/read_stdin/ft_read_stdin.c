#include "ft_list.h"
#include <stdio.h>

t_list		*get_stdin()
{
	t_list	*begin_list;
	char	buf[1];

	if (!(read(0, buf, 1) > 0))
		return (NULL);
	begin_list = ft_create_elem(ft_strdup(buf));
	while (read(0, buf, 1) > 0)
		ft_list_push_back(&begin_list, ft_strdup(buf));
	return (begin_list);
}

char		*convert_to_char(t_list *begin_list)
{
	char	*str;
	int	i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (i  + 1))))
		return (NULL);
	tmp = begin_list;
	i = 0;
	while (tmp != NULL)
	{
		str[i++] = *((char *)tmp->data);
		tmp = tmp->next;
	}
	str[i] = '\0';
	return (str);
}
