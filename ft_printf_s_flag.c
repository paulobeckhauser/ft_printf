/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 19:36:00 by pabeckha          #+#    #+#             */
/*   Updated: 2023/12/06 13:58:44 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *string)
{
	int	count;

	count = 0;
	if (!string)
	{
		count += ft_printf_s("(null)");
		return (count);
	}
	while (string[count])
	{
		write(1, &string[count], 1);
		count++;
	}
	return (count);
}
