/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:04:10 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/09 19:16:22 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	if (dst == src)
		return (dst);
	a = (char *) src;
	b = (char *) dst;
	while (i < n)
	{
		b[i] = a[i];
		i ++;
	}
	return (dst);
}
