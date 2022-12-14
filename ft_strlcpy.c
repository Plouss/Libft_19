/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:12:54 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/11/08 16:01:49 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char src[] = "oussama1";
//     char dst[] = "vvdfbsgs";
//     printf("%lu", strlcpy(dst, src, 3));
//     char src1[] = "oussama1";
//     char dst1[] = "vvdfbsgs";
//     printf("\n%lu", ft_strlcpy(dst1, src1, 3));
// }