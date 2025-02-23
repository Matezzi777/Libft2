#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		node = *lst;
		*lst = (*lst)->next;
		free(node);
	}
}
