#include "../includes/ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->next = NULL;
		node->data = data;
	}
	return (node);
}
/*
	if (node)
	{
		node->next = NULL;
		node->data = data;
	}

	-----OR-----

	(*node).next = NULL;
	(*node).data = data;
*/
