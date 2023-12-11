/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:11:38 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/09 19:18:42 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*k;
	char	ch;

	ch = c;
	i = 0;
	k = (char *)s;
	while (k[i] != '\0')
	{
		if (k[i] == ch)
			return (k + i);
		i++;
	}
	if (ch == '\0')
		return (k + i);
	return (NULL);
}
// #include <stdio.h>
// int main ()
// {
//  printf ("%s", ft_strchr("hello", '\0'));
// 	printf ("%s", strchr("hello", '\0'));	
// }
