/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:02:06 by amarouf           #+#    #+#             */
/*   Updated: 2023/11/12 19:16:39 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_number_size(int number)
{
	int	len;

	len = 0;
	if (number == 0)
	{
		return (1);
	}
	if (number < 0)
	{
		len += 1;
	}
	while (number != 0)
	{
		number /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	long	num;

	num = n;
	len = ft_number_size(n);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	p[len] = '\0';
	len --;
	if (n == 0)
		p[0] = '0';
	if (num < 0)
	{
		p[0] = '-';
		num *= -1;
	}
	while (num != 0)
	{
		p[len] = (num % 10) + 48;
		len --;
		num /= 10;
	}
	return (p);
}
// int main ()
// {
// 	char *p = ft_itoa(NULL);

// 	printf("%s", p);
// }