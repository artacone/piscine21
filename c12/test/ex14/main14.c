
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

int	ft_strcmp(char *s1, char *s2)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = s2;
	while (*str1 == *str2++)
	{
		if (*str1++ == '\0')
		{
			return (0);
		}
	}
	return (*(unsigned char *)str1 - *(unsigned char *)(str2 - 1));
}

void	ft_list_sort(t_list **begin_list, int (*cmp)());

int	main(void)
{
	t_list *list = NULL;

	ft_list_push_front(&list, "1");
	ft_list_push_front(&list, "2");
	ft_list_push_front(&list, "4");
	ft_list_push_front(&list, "3");
	ft_list_push_front(&list, "9");
	ft_list_push_front(&list, "8");
	ft_list_push_front(&list, "0");
	
	ft_list_print(list);

	ft_list_sort(&list, ft_strcmp);
	
	ft_list_print(list);
	return (0);
}
