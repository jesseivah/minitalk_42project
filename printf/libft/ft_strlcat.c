/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebitrus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:02:16 by jebitrus          #+#    #+#             */
/*   Updated: 2023/05/12 16:15:16 by jebitrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	a;
	size_t	b;

	len = ft_strlen(src);
	a = 0;
	b = 0;
	while (dest[a] && a < dstsize)
		a++;
	while (src[b] && (a + b + 1) < dstsize)
	{
		dest[a + b] = src[b];
		b++;
	}
	if (a != dstsize)
		dest[a + b] = '\0';
	return (a + len);
}
