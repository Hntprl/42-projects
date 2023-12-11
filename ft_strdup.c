/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:19:09 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/08 20:04:58 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *) malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i ++;
	}
	p[i] = '\0';
	return (p);
}
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//     char *a = NULL;
//     char *p = ft_strdup(a);
//     char *r = strdup(a);
//     printf ("%s",r);
//     printf ("%s",p);
// }
