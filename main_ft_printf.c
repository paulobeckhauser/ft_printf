/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 17:53:06 by pabeckha          #+#    #+#             */
/*   Updated: 2023/12/06 18:38:08 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf/ft_printf.h"
// #include <stdio.h>

// void	printf_c(void)
// {
// 	int count;
// 	char charac = 'a';
// 	char buffer[100]; // Adjust the size as needed

// 	printf("\033[4mCharacter: '%%c'\033[0m\n\n");
// 	printf("Original Function: ");
// 	printf("%c", charac);
// 	printf("\n\n");
// 	printf("Built Function: ");
// 	fflush(stdout);
// 	ft_printf("%c", charac);
// 	printf("\n\n");
// 	char printfBuffer[100];
// 	char ftPrintfBuffer[100];
// 	int printfResult = snprintf(printfBuffer, sizeof(printfBuffer), "%c", charac);
// 	int ftPrintfResult = snprintf(ftPrintfBuffer, sizeof(ftPrintfBuffer), "%c", charac);
// 	if (printfResult == ftPrintfResult && ft_strncmp(printfBuffer, ftPrintfBuffer, 2) == 0) 
// 		printf("✅  ");
// 	else
// 		printf("❌  ");

// 	printf("\n\n===========================================================================================\n");
// 	printf("\n");
// }

// void	printf_s(void)
// {
// 	int count;
// 	char *string = "Hello";
	
	

	
// 	printf("\033[4mString '%%s':\033[0m\n\n");
// 	printf("Original Function: ");
// 	printf("%s", string);
// 	printf("\n\n");
// 	printf("Built Function: ");
// 	// fflush(stdout);
// 	ft_printf("%s", string);
// 	// printf("\n\n");
	
// 	// char printfBuffer[100];
// 	// char ftPrintfBuffer[100];
// 	// int printfResult = snprintf(printfBuffer, sizeof(printfBuffer), "%s", string);
// 	// int ftPrintfResult = snprintf(ftPrintfBuffer, sizeof(ftPrintfBuffer), "%s", string);
// 	// if (printfResult == ftPrintfResult && ft_strncmp(printfBuffer, ftPrintfBuffer, 2) == 0) 
// 	// 	printf("✅  ");
// 	// else
// 	// 	printf("❌  ");

// 	printf("\n\n===========================================================================================\n");
// 	printf("\n");
// }

// void printf_d(void)
// {
// 	int count;

// 	count = printf("Nbr-> %d\n", -42);
// 	printf("%d chars\n", count);//, 
// 	fflush(stdout);
// 	count = ft_printf("Nbr-> %d\n", -42);
// 	printf("%d chars\n", count);//, 
// 	fflush(stdout);
// }

// int	main(void)
// {
// 	printf("\n\n");
// 	// printf("\033[4mPRINTF FUNCTION\033[0m");
// 	printf("\n\n\n");
	
// 	printf_c();
// 	// printf_s();
// 	// printf_d();
// }


#include <stdio.h>

int main()
{
    // printf("\n\n");
	
	// char ch = 'A';
	// printf("Character Original: %c\n", ch);
	// ft_printf("Character Built: %c\n", ch);
	// char printfBuffer_c[100];
	// char ftPrintfBuffer_c[100];
	// int printfResult_c = snprintf(printfBuffer_c, sizeof(printfBuffer_c), "%c", ch);
	// int ftPrintfResult_c = snprintf(ftPrintfBuffer_c, sizeof(ftPrintfBuffer_c), "%c", ch);
	// if (printfResult_c == ftPrintfResult_c && ft_strncmp(printfBuffer_c, ftPrintfBuffer_c, 2) == 0) 
	// 	printf("✅  ");
	// else
	// 	printf("❌  ");
	// printf("\n\n\n");
	// printf("\n");
	
    char* str = "Hello, world!";
	printf("String Original: %s\n", str);
	ft_printf("String Built: %s\n", str);
	char printfBuffer_s[100];
	char ftPrintfBuffer_s[100];
	int printfResult_s = snprintf(printfBuffer_s, sizeof(printfBuffer_s), "%s", str);
	int ftPrintfResult_s = snprintf(ftPrintfBuffer_s, sizeof(ftPrintfBuffer_s), "%s", str);
	if (printfResult_s == ftPrintfResult_s && ft_strncmp(printfBuffer_s, ftPrintfBuffer_s, 2) == 0) 
		printf("✅  ");
	else
		printf("❌  ");
	printf("\n\n\n");
	

	
    void* ptr = (void*)0x12345678;
	printf("Pointer Original: %p\n", ptr);
    ft_printf("Pointer Built: %p\n", ptr);
	char printfBuffer_p[100];
	char ftPrintfBuffer_p[100];
	int printfResult_p = snprintf(printfBuffer_p, sizeof(printfBuffer_p), "%p", str);
	int ftPrintfResult_p = snprintf(ftPrintfBuffer_p, sizeof(ftPrintfBuffer_p), "%p", str);
	if (printfResult_p == ftPrintfResult_p && ft_strncmp(printfBuffer_p, ftPrintfBuffer_p, 2) == 0) 
		printf("✅  ");
	else
		printf("❌  ");
	printf("\n\n\n");
	
    int num = -42;
	printf("Decimal Original: %d\n", num);
    ft_printf("Decimal Built: %d\n", num);
	printf("\n");
	
    int i_num = 42;
	printf("Integer Original: %i\n", i_num);
    ft_printf("Integer Built: %i\n", i_num);
	printf("\n");
	
    unsigned int u_num = 42;
	printf("Unsigned Decimal Original: %u\n", u_num);
    ft_printf("Unsigned Decimal Built: %u\n", u_num);
	printf("\n");
	
    int hex_num = 255;
	printf("Lowercase Hexadecimal Original: %x\n", hex_num);
    ft_printf("Lowercase Hexadecimal Built: %x\n", hex_num);
	printf("\n");
	
	printf("Uppercase Hexadecimal Original: %X\n", hex_num);
    ft_printf("Uppercase Hexadecimal Built: %X\n", hex_num);
	printf("\n");
	
	printf("Percent Sign Original: %%\n");
    ft_printf("Percent Sign Built: %%\n");
	printf("\n\n");
	// int count;
	
	// count = printf("\001\002\007\v\010\f\r\n");
	// printf("\n");
	// printf("%d", count);
    return 0;
}
