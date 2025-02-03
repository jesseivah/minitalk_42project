/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebitrus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:03:18 by jebitrus          #+#    #+#             */
/*   Updated: 2023/05/17 15:03:52 by jebitrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len > 0)
	{
		i = 0;
		while (needle[i] && haystack[i] == needle[i] && len > 0)
		{
			len--;
			i++;
		}
		if (needle[i] == '\0')
			return ((char *)haystack);
		len += i;
		len--;
		haystack++;
	}
	return (NULL);
}
