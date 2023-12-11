/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:02:26 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/07 10:27:58 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*crntnode;
	void	*cntnt;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		cntnt = f(lst->content);
		crntnode = ft_lstnew(cntnt);
		if (!crntnode)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, crntnode);
		lst = lst->next;
	}
	return (newlst);
}
// void del(void *data)
// {
//     free(data);
// }
// void *f(void *data)
// {
//     *(int *)data *= 10;
//     return (data);
// }
// #include <stdio.h>
// int main ()
// {
//     t_list *p;
//      t_list *l;
//       t_list *k;
//     int c1 = 1;
//     int c2 = 2;
//     int c3 = 3;
//     p = malloc(sizeof(t_list));
//     l = malloc(sizeof(t_list));
//     k = malloc(sizeof(t_list));
//     p -> content = &c1;
//      l -> content = &c2;
//       k -> content = &c3;
//     p -> next = l;
//     l -> next = k;
//     k -> next = NULL;
//     t_list *o = ft_lstmap(p, f, del);
//     while (o != NULL)
//     {
//         printf("%d\n", *(int *) o -> content);
//         o = o -> next;
//     }
// }
