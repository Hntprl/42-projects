/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:12:14 by amarouf           #+#    #+#             */
/*   Updated: 2023/12/09 19:24:54 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -= 32);
	return (c);
}
// #include <stdio.h>
// int main ()
// {
//     char a = 'g';
//     printf("%c",ft_toupper(a));
// }
