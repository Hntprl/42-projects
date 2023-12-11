/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:42:54 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/03 11:04:17 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *) b;
	while (i < len)
	{
		a[i] = (unsigned char) c;
		i ++;
	}
	return (b);
}
// int main ()
// {
// 	int i[] = {654, 56, 8};
// 	int *h = &i[1];
// 	ft_memset(h, 0, 4);
// 	ft_memset(h, 4, 2);
// 	ft_memset(h, 246, 1);
// 	// ft_memset();
// 	printf("%d", h[0]);
// }
