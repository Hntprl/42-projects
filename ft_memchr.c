/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:29:37 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/06 15:18:50 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i ++;
	}
	return (NULL);
}
// #include <stdio.h>
// int main ()
// {
// 	char *p = "Hello, world";
// 	char *l = ft_memchr(p, 'l', 0);

// 	printf("%s", l);
// }
