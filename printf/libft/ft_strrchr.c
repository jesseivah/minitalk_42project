/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebitrus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:53:13 by jebitrus          #+#    #+#             */
/*   Updated: 2023/05/12 16:59:19 by jebitrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = (int) ft_strlen(str);
	while (index >= 0)
	{
		if (str[index] == (unsigned char) c)
		{
			return ((char *)str + index);
		}
		index--;
	}
	return (NULL);
}
