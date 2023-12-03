/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:52:15 by pabeckha          #+#    #+#             */
/*   Updated: 2023/12/03 15:01:31 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_str(char *str)
{
	int count;

	count = -1;
	while (str[++count])
	{
		ft_putchar_fd(str[count], 1);
	}
	return (count);
}

int print_nbr()








int	ft_printf(const char *format, ...)
{
	int count;
	int i;
	va_list ap;

	i = -1;
	va_start(ap, format);
	count = 0;
	while (format[++i])
	{
		if (format[i] != '%')
		{
			ft_putchar_fd(format[i], 1);
			count += 1;
		}

		
			
		else if (format[i] == '%')
		{



			
			if (format[++i] == 'c')
			{
				ft_putchar_fd(va_arg(ap, int), 1);
				count += 1;
			}
			else if (format[++i] == 's')
			{
				print_str(va_arg(ap, char *));
			}

			// else if (format[++i] == 'p')
			// {
				
			// }

			// else if (format[++i] == 'd')
			// {
				
			// }
				






		}
	}
	
	return (count);
}
