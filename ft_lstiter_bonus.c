/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:11:56 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/09 16:33:33 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f (lst -> content);
		lst = lst -> next;
	}
}

// void f(void *data)
// {
// 	char *c = (char *)data;
// 	while (*c)
// 	{
// 		*c += 32;
// 		c ++;
// 	}
// }
// int main ()
// {
// 	char c1[] = "HI";
// 	char c2[] = "IM";
// 	char c3[] = "LOWWER";
// 	t_list *p = malloc(sizeof(t_list));
// 	t_list *k = malloc(sizeof(t_list));
// 	t_list *l = malloc(sizeof(t_list));

// 	p -> content = &c1;
// 	k -> content = &c2;
// 	l -> content = &c3;

// 	p -> next = k;
// 	k -> next = l;
// 	l -> next = NULL;

// 	ft_lstiter(p, f);

// 	while (p != NULL)
// 	{
// 		printf ("%s", (char *) p -> content);
// 		p = p -> next;
// 	}
// }
