#include <stdio.h>
#include "./includes/ft_list.h"

void	display(t_list *begin)
{
	while (begin)
	{
		printf("%s\n", (char *)begin->data);
		begin = begin->next;
	}
}

int	main(void)
{
	t_list	*begin, elem1, elem2, elem3;

	begin = NULL;
	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = NULL;

	elem1.data = "element1";
	elem2.data = "element2";
	elem3.data = "element3";

	ft_list_push_front(&begin, "element0");
	ft_list_push_back(&begin, "element4");

	int	size = ft_list_size(begin);

	t_list	*last_elem = ft_list_last(begin);

	display(begin);
	printf("size: %d\n", size);
	printf("last elem: %s\n", (char *)last_elem->data);
	return (0);
}
