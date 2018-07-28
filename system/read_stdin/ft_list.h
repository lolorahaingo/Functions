#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
	void *data;
	struct s_list *next;
}	t_list;

t_list *ft_create_elem(void *data);
void ft_list_push_back(t_list **begin_list, void *data);
t_list *get_stdin(int loc);
