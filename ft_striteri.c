/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:24:55 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/13 16:21:27 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i ++;
	}
}
	// void f(unsigned int index, char *character) {
	// 	(void) index;
	// 	*character -= 32;
	// }

	// int main ()
	// {
	// 	char p[10] = "Hello";
	// 	ft_striteri(p, f);
	// 	printf("%s", p);
	// }
