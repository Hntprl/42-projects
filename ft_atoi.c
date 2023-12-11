/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:46:44 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/01 11:45:03 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	a;

	s = 1;
	i = 0;
	a = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		i ++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s *= -1;
		}
		i ++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		a = (str[i] - '0') + (a * 10);
		i ++;
	}
	return (a * s);
}
// #include <stdio.h>
// int main ()
// {
//     char* a = "   123g1654ljhg";
//     printf ("%d\n",ft_atoi(a));
// 	 printf ("%d",atoi(a));
// }
