#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	while (*lst)
	{
		del((*lst)->content);
		next = (*lst)->next;
		free(*lst);
		*lst = next;
	}
	lst = 0;
}
