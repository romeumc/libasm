/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:14:00 by rmartins          #+#    #+#             */
/*   Updated: 2021/04/27 12:57:17 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_strdup(char *str)
{
	char	*temp;

	temp = ft_strdup(str);
	if (strcmp(str, temp) == 0)
	{
		free(temp);
		return (1);
	}
	else
	{
		free(temp);
		return (0);
	}
}

void	make_test_strdup(void)
{
	printf(ANSI_F_CYAN "ft_strdup \t " ANSI_RESET);
	print_result(test_strdup("romeu"));
	print_result(test_strdup("romeu\n\n\n\t"));
	print_result(test_strdup(""));
	print_result(test_strdup("\0"));
	print_result(test_strdup("1\0 000"));
	print_result(test_strdup("01234567, AAAAAA, abc\xba e, end of string !"));
	print_result(test_strdup("♫♪.ılılıll|̲̅̅●̲̅̅|̲̅̅=̲̅̅|̲̅̅●̲̅̅|llılılı.♫♪"));
	print_result(test_strdup("    "));
	printf("\n");
}
