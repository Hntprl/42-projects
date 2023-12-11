/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:05:32 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/13 15:24:03 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	p = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i ++;
	}
	p[i] = '\0';
	return (p);
}
// char exmapi(unsigned int index, char c)
// {
// 	(void)	index;
//   if (c >= 'a' && c <= 'z')
//     return c - ('a' - 'A');
//   else
//     return c;
// }
// #include <stdio.h>
// int main ()
// {
//     char *p = "Hello World";
//     printf ("%s", ft_strmapi(NULL, NULL));
// }
