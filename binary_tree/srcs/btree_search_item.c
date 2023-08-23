#include "../includes/ft_btree.h"

void	*btree_search_item(t_btree *root, void *dataref,
		int (*cmpf)(void *, void *))
{
	void	*result;

	if (root)
	{
		result = btree_search_item(root->left, dataref, cmpf);
		if (result)
			return (result);
		if (cmpf(root->item, dataref) == 0)
			return (root->item);
		result = btree_search_item(root->right, dataref, cmpf);
		if (result)
			return (result);
	}
	return (0);
}
/*
	if (cmpf(root->item, dataref) == 0)
		return (root->item);
	else if (cmpf(root->item, dataref) > 0)
	{
		if (root->left)
			result = btree_search_item(root->left, dataref, cmpf);
		else
			return (0);
	}
	else
	{
		if (root->right)
			result = btree_search_item(root->right, dataref, cmpf);
		else
			return (0);
	}
*/
