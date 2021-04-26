/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:14:00 by rmartins          #+#    #+#             */
/*   Updated: 2021/04/26 19:16:42 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_strcmp(char *s1, char *s2)
{
	int	temp;

	temp = ft_strcmp(s1, s2);
	if (temp < 0)
		temp = -1;
	else if (temp > 0)
		temp = 1;
	//printf("i:%d j:%d - s1:%s s2:%s\n", temp, strcmp(s1, s2), s1, s2);
	if (temp == strcmp(s1, s2))
		return (1);
	else
		return (0);
}

void	make_test_strcmp(void)
{
	printf(ANSI_F_CYAN "ft_strcmp \t " ANSI_RESET);
	print_result(test_strcmp("romeu", "romeu"));
	print_result(test_strcmp("rmartins", "romeu"));
	print_result(test_strcmp("romeu", "rmartins"));
	print_result(test_strcmp("romeu", "uemor"));
	print_result(test_strcmp("", ""));
	print_result(test_strcmp("\0", "0"));
	printf("\n");
}
