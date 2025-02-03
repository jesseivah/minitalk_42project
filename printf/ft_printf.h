/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebitrus <jebitrus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 15:43:21 by jebitrus          #+#    #+#             */
/*   Updated: 2023/07/13 18:11:55 by jebitrus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "./libft/libft.h"

int	ft_printf(const char *f, ...);
int	print_chr(int x);
int	ft_type(va_list arg, char type);
int	print_str(char *str);
int	print_int(int ret);
int	print_uint(unsigned int ret);
int	print_hex(unsigned long int nbr, int format);
int	print_ptr(unsigned long int nbr, int format);
#endif
