/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:30:09 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/09 19:20:36 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < dstsize)
	{
		i ++;
	}
	while (src[j] != '\0' && (j + i + 1) < dstsize)
	{
		dst[i + j] = src[j];
		j ++;
	}
	if (i < dstsize)
	{
		dst[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
// 	printf("%lu\n", ft_strlcat(NULL, "hello", 0));
// 	printf("%lu\n", strlcat(NULL, "hello", 0));
// }
