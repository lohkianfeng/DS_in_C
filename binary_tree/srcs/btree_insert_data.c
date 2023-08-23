#include "../includes/ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree	*ptr;

	ptr = *root;
	if (ptr == NULL)
	{
		ptr = btree_create_node(item);
	}
	else
	{
		if (cmpf(ptr->item, item) > 0)
		{
			if (ptr->left)
				btree_insert_data(&(ptr->left), item, cmpf);
			else
				ptr->left = btree_create_node(item);
		}
		else
		{
			if (ptr->right)
				btree_insert_data(&(ptr->right), item, cmpf);
			else
				ptr->right = btree_create_node(item);
		}
	}
}
