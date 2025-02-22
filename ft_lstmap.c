#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*node;

	map = ft_lstnew(f(lst->content));
	if (!map)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		ft_lstadd_back(&map, node);
	}
	return (map);
}
