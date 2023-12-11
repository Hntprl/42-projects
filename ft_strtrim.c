/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:43:06 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/05 11:30:17 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findchar(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	if (j == -1)
		return (ft_strdup(""));
	while (findchar(set, s1[i]) != 0)
		i ++;
	while (findchar(set, s1[j]) != 0)
		j --;
	return (ft_substr(s1, i, j - i + 1));
}
// #include <stdio.h>
// int main ()
// {
//     printf ("%s", ft_strtrim("Hello, World", "World"));
// }
