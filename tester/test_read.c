/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:44:23 by rmartins          #+#    #+#             */
/*   Updated: 2021/04/27 12:54:36 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_read(int fd, char *str, size_t len)
{
	
	// if (ft_strlen(str) == strlen(str))
	// 	return (1);
	// else
		return (0);
}

void	make_test_read(void)
{
	char	*str;

	str = strdup("Hello world");
	printf(ANSI_F_CYAN "ft_read \t " ANSI_RESET);
	print_result(test_write(1, str, strlen(str)));
	printf("\n");
}
