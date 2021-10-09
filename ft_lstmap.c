#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;

	(void)del;
	if (!lst)
		return (0);
	while (lst->next)
	{
		ft_lstadd_back(&ret, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (ret);
}
