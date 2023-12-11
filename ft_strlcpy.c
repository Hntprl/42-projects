/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:05:16 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/09 19:21:35 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i] != '\0')
		{
			i ++;
		}
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i ++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src[i] != '\0')
	{
		i ++;
	}
	return (i);
}
// // #include <stdio.h>
// int main ()
// {
// 	char *p = "Hello";
// 	char q[20] = "world";
// 	// ft_strlcpy(q, p, 5);
// 	strlcpy(q, p, 5);
// 	printf("%s\n", q);
// }
