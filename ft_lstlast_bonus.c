/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:44:43 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/08 15:24:00 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}
// #include <stdio.h>
// int main ()
// {
//     t_list *p;
//     t_list *l;
//     char c= 'c';
//     char c1 = 'v';
//     p = (t_list *)malloc(sizeof(t_list));
//     l = malloc(sizeof(t_list));
//     l -> content = &c1;
//     l -> next = p;
//     p -> content = &c;
//     p -> next = NULL;
//     t_list *o = ft_lstlast(l);
//     printf ("%c", *(char *) o -> content);
// }
