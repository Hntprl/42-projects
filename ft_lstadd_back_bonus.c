/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:31:52 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/10 19:09:32 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new)
		return ;
	p = ft_lstlast(*lst);
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	else
		p -> next = new;
}
// int main ()
// {
// 	char c[] = "HII";
// 	t_list *s = malloc(sizeof(t_list));
// 	s -> content = &c;
// 	ft_lstadd_back(NULL,NULL);
// 	printf("%s", (char *) s -> content);
// }
