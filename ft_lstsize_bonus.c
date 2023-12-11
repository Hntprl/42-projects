/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:37:58 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/08 15:24:15 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst -> next;
		i ++;
	}
	return (i);
}
// int main ()
// {
//     t_list *p;
//     t_list *l;
//     char c= 'c';
//     char c1 = 'v';
//     p = (t_list *)malloc(sizeof(t_list));
//     l = malloc(sizeof(t_list));
//     l -> content = &c1;
//     l -> next = l;
//     p -> content = &c;
//     p -> next = NULL;
//     printf ("%d", ft_lstsize(&l));
// }
