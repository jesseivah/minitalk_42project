/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebitrus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:04:56 by jebitrus          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:07 by jebitrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;
	char	*t;

	i = 0;
	while (s1[i])
		i++;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	t = str;
	while (*s1)
		*t++ = *s1++;
	*t = '\0';
	return (str);
}
