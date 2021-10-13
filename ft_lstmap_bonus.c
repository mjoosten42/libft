#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*new;

	if (!lst)
		return (0);
	ret = ft_lstnew(f(lst->content));
	if (!ret)
		return (0);
	while (lst->next)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, new);
		lst = lst->next;
	}
	return (ret);
}
