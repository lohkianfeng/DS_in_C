#include "../includes/ft_btree.h"

int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;

	if (root)
	{
		left = 1;
		right = 1;
		if (root->left)
			left += btree_level_count(root->left);
		if (root->right)
			right += btree_level_count(root->right);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
