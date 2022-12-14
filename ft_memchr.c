/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:11:44 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 15:46:09 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (((char *)s)[i] == ((char )c))
			return (&((char *)s)[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main()
// {
//     int c = '9';
//     const void *b = "a";
//     printf("%s", ft_memchr(b, c, 2));
//     int c1 = 'a';
//     const void *b1 = "9";
//     printf("\n%s", memchr(b1, c1, 2));
// }
