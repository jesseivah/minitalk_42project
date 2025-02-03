/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebitrus <jebitrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:28:33 by jebitrus          #+#    #+#             */
/*   Updated: 2023/07/13 17:39:57 by jebitrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digits(int n)
{
	int			count;
	long int	nb;

	count = 0;
	nb = n;
	if (nb <= 0)
	{
		count ++;
		nb = nb * -1;
	}
	while (nb)
	{
		nb = nb / 10;
		count ++;
	}
	return (count);
}

int	print_int(int ret)
{
	int			digits;
	long int	nbr;

	nbr = ret;
	digits = count_digits(nbr);
	ft_putnbr_fd(nbr, 1);
	return (digits);
}
