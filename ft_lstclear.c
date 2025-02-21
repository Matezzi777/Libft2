#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*to_del;

	node = *lst;
	while (node->next)
	{
		del(node->content);
		to_del = node;
		node = node->next;
		free(to_del);
	}
}
