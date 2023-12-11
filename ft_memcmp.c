/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:50:02 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/06 18:58:05 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		if (*c1 != *c2)
		{
			return (*c1 - *c2);
		}
		n --;
		c1 ++;
		c2 ++;
	}
	return (0);
}
// #include <stdio.h>
// int main ()
// {
// 	int i = memcmp("hello", "hello", 5);
// 	int o = ft_memcmp("hello", "hello", 5);

// 	printf("%d\n", i);
// 	printf("%d", o);
// }
