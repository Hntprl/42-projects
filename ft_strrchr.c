/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:08:01 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/05 11:16:47 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)s + i);
	}
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return ((char *)s + i);
		}
		i --;
	}
	return (0);
}
// #include <stdio.h>
// int main ()
// {
//     printf ("%s", ft_strrchr("Hello World\n",'l'));
// 	printf ("%s", strrchr("Hello World\n",'l'));
// }
