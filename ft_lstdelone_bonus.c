/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:59:10 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/08 15:23:42 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}
// void freelst(void *data)
// {
//     free(data);
//     return;
// }
// #include <stdio.h>
// int main ()
// {
//     t_list *p = ft_lstnew("content");
//     ft_lstdelone(p, &freelst);

//     printf ("%s", (char *)p -> content);
// }
