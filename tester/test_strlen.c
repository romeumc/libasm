/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:14:00 by rmartins          #+#    #+#             */
/*   Updated: 2021/04/26 16:49:34 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_strlen(char *str)
{
	if (ft_strlen(str) == strlen(str))
		return (1);
	else
		return (0);
}

void	make_test_strlen(void)
{
	printf(ANSI_F_CYAN "ft_strlen \t " ANSI_RESET);
	print_result(test_strlen("romeu"));
	print_result(test_strlen("romeu\n\n\n\t"));
	print_result(test_strlen(""));
	print_result(test_strlen("\0"));
	print_result(test_strlen("1\0 000"));
	print_result(test_strlen("01234567, AAAAAA, abc\xba e, end of string !"));
	print_result(test_strlen("♫♪.ılılıll|̲̅̅●̲̅̅|̲̅̅=̲̅̅|̲̅̅●̲̅̅|llılılı.♫♪"));
	print_result(test_strlen("    "));
	printf("\n");
}
