/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:19:08 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/08 15:23:21 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		new -> next = *lst;
		*lst = new;
	}
}
// #include <stdio.h>
// int main ()
// {
// 	t_list *begin = NULL;
// 	t_list *elem;
// 	t_list *elem2;
// 	t_list *elem3;
// 	t_list *elem4;
// 	ft_lstadd_front(&begin, elem4);
// 	ft_lstadd_front(&begin, elem3);
// 	ft_lstadd_front(&begin, elem2);
// 	ft_lstadd_front(&begin, elem);
// while (begin)
// {
// 	printf("%s", (char *)begin -> content);
// 	begin = begin->next;
// }
// }
