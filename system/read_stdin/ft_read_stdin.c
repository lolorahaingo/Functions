#include "ft_list.h"
#include <stdio.h>

t_list *get_stdin(int loc)
{
	t_list *begin_list;
	char buf[1];

	if (!(read(loc, buf, 1) > 0))
		return (NULL);
	begin_list = ft_create_elem(buf);
	while (read(loc, buf, 1) > 0)
		ft_list_push_back(&begin_list, buf);
	return (begin_list);
}
