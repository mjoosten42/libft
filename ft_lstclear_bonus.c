#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*next;

	ptr = *lst;
	*lst = 0;
	while (ptr->next)
	{
		next = ptr->next;
		ft_lstdelone(ptr, del);
		free(ptr);
		ptr = next;
	}
}
