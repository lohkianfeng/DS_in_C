#include "./includes/ft_btree.h"

void	display(t_btree *root)
{
	printf("%s\n", (char *)root->item);
	if (root->left)
		display(root->left);
	if (root->right)
		display(root->right);
}

void	applyf(void *item)
{
	printf("%s\n", (char *)item);
}

int	cmpf(void *v1, void *v2)
{
	char	*s1 = (char *)v1;
	char	*s2 = (char *)v2;

	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	t_btree	*root;

	root = btree_create_node("num5");

	btree_insert_data(&root, "num3", &cmpf);
	btree_insert_data(&root, "num7", &cmpf);
	btree_insert_data(&root, "num9", &cmpf);
	btree_insert_data(&root, "num4", &cmpf);
	btree_insert_data(&root, "num6", &cmpf);
	btree_insert_data(&root, "num1", &cmpf);
	btree_insert_data(&root, "num2", &cmpf);

	printf("PREFIX\n");
	btree_apply_prefix(root, &applyf);
	printf("INFIX\n");
	btree_apply_infix(root, &applyf);
	printf("SUFFIX\n");
	btree_apply_suffix(root, &applyf);

	printf("LEVELS: %d\n", btree_level_count(root));

	return (0);
}
