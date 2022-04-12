#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (*lst == NULL)
		return (0);
	while (lst ->next != NULL)
	{
		i++;
		lst = lst ->next;
	}
	return (i);
}
