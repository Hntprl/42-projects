/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:38:48 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/02 10:19:05 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <stdio.h>
// int main ()
// {
//     char a[] = "hello";
//     size_t i = ft_strlen(a);

//     ft_bzero(a, i);
//     printf ("%d\n",a[0]);
// }
