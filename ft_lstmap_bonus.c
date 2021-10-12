#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	if (!lst)
		return (0);
	ret = ft_lstnew(f(lst->content));
	while (lst->next)
	{
		ft_lstadd_back(&ret, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (ret);
}
