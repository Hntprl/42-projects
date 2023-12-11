/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:45:18 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/08 15:23:37 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (!lst || !del)
		return ;
	while ((*lst) != NULL)
	{
		p = (*lst)-> next;
		ft_lstdelone(*lst, del);
		(*lst) = p;
	}
	free(*lst);
}
// void freelst(void *data)
// {
//     free(data);
// }
// #include <stdio.h>
// int main ()
// {
//     t_list *l = ft_lstnew("new");
//     t_list *p = ft_lstnew("content");
//     l -> next = p;

//     // ft_lstclear(&l, &freelst);
//     while (l != NULL)
//    { 
//         printf ("%s ", (char *) l -> content);
//         l = l -> next;
//    }
// }
