#include "../includes/ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = NULL;
	node = (t_btree *)malloc(sizeof(node));
	if (node == NULL)
		return (0);
	else
	{
		node->left = NULL;
		node->right = NULL;
		node->item = item;
	}
	return (node);
}
