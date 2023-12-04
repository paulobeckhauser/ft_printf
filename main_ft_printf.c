/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:53:06 by pabeckha          #+#    #+#             */
/*   Updated: 2023/12/04 15:52:56 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
#include <stdio.h>

void	printf_c(void)
{
	int count;
	char charac = 'a';
	char buffer[100]; // Adjust the size as needed

	printf("\033[4mCharacter: '%%c'\033[0m\n\n");
	printf("Original Function: ");
	printf("%c", charac);
	printf("\n\n");
	printf("Built Function: ");
	fflush(stdout);
	ft_printf("%c", charac);
	printf("\n\n");
	char printfBuffer[100];
	char ftPrintfBuffer[100];
	int printfResult = snprintf(printfBuffer, sizeof(printfBuffer), "%c", charac);
	int ftPrintfResult = snprintf(ftPrintfBuffer, sizeof(ftPrintfBuffer), "%c", charac);
	if (printfResult == ftPrintfResult && ft_strncmp(printfBuffer, ftPrintfBuffer, 2) == 0) 
		printf("✅  ");
	else
		printf("❌  ");

	printf("\n\n===========================================================================================\n");
	printf("\n");
}

void	printf_s(void)
{
	int count;
	char *string = "Hello";
	
	

	
	// printf("\033[4mString '%%s':\033[0m\n\n");
	// printf("Original Function: ");
	// printf("%s", string);
	// printf("\n\n");
	// printf("Built Function: ");
	// fflush(stdout);
	ft_printf("%s", string);
	// printf("\n\n");
	
	// char printfBuffer[100];
	// char ftPrintfBuffer[100];
	// int printfResult = snprintf(printfBuffer, sizeof(printfBuffer), "%s", string);
	// int ftPrintfResult = snprintf(ftPrintfBuffer, sizeof(ftPrintfBuffer), "%s", string);
	// if (printfResult == ftPrintfResult && ft_strncmp(printfBuffer, ftPrintfBuffer, 2) == 0) 
	// 	printf("✅  ");
	// else
	// 	printf("❌  ");

	printf("\n\n===========================================================================================\n");
	printf("\n");
}

int	main(void)
{
	printf("\n\n");
	// printf("\033[4mPRINTF FUNCTION\033[0m");
	printf("\n\n\n");
	
	// printf_c();
	printf_s();
}