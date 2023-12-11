/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:31:00 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/09 19:17:03 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dst == src)
		return (dst);
	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i --;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i ++;
		}	
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// 	// printf("%s", ft_memmove("hello", "hello", 5));
// 	printf("%s", memmove("hello", "hello", 5));
// }
