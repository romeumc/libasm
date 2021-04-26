/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:14:00 by rmartins          #+#    #+#             */
/*   Updated: 2021/04/26 16:50:57 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_strcpy(char *str)
{
	char	dest[50];
	char	*temp;

	temp = ft_strcpy(dest, str);
	if (strcmp(temp, str) == 0)
		return (1);
	else
		return (0);
}

void	make_test_strcpy(void)
{
	printf(ANSI_F_CYAN "ft_strcpy \t " ANSI_RESET);
	print_result(test_strcpy("romeu"));
	print_result(test_strcpy("romeu\n\n\n\t"));
	print_result(test_strcpy(""));
	print_result(test_strcpy("\0"));
	print_result(test_strcpy("1\0 000"));
	print_result(test_strcpy("01234567, AAAAAA, abc\xba e, end of string !"));
	print_result(test_strcpy("    "));
	printf("\n");
}
