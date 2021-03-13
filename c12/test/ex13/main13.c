#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new)
	{
		new->next = NULL;
		new->data = data;
	}
	return (new);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (*begin_list)
	{
		tmp = ft_create_elem(data);
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}

void	ft_list_print(t_list *list)
{
	t_list *node = list;
	for( ; node != NULL; node = node->next)
	{
		printf("%s ", (char *)node->data);
	}
	printf("\n");
}

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2);

int	main(void)
{
	t_list *list1 = NULL;
	t_list *list2 = NULL;

	//ft_list_push_front(&list1, "1");
	//ft_list_push_front(&list1, "2");
	ft_list_push_front(&list2, "4");
	ft_list_push_front(&list2, "3");
	
	ft_list_print(list1);
	ft_list_print(list2);

	ft_list_merge(&list1, list2);
	
	ft_list_print(list1);
	return (0);
}
