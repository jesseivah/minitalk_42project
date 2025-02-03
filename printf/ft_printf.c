/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebitrus <jebitrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:15:09 by jebitrus          #+#    #+#             */
/*   Updated: 2023/07/20 14:01:52 by jebitrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_type(va_list arg, char type);

int	ft_printf(const char *f, ...)
{
	va_list	arg;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(arg, f);
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			len += ft_type(arg, f[i]);
		}
		else
			len += write(1, &f[i], 1);
		i++;
	}
	va_end(arg);
	return (len);
}

int	ft_type(va_list arg, char type)
{
	if (type == 'c')
		return (print_chr(va_arg(arg, int)));
	else if (type == 's')
		return (print_str(va_arg(arg, char *)));
	else if (type == 'p')
		return (print_ptr(va_arg(arg, unsigned long int), type));
	else if (type == 'd' || type == 'i')
		return (print_int(va_arg(arg, int)));
	else if (type == 'u')
		return (print_uint(va_arg(arg, unsigned int)));
	else if (type == 'X' || type == 'x')
		return (print_hex((unsigned int)va_arg(arg, unsigned long int), type));
	else if (type == '%')
		return (write(1, "%", 1));
	else
		return (0);
}
