/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_write.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:44:23 by rmartins          #+#    #+#             */
/*   Updated: 2021/04/26 22:01:07 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

int	test_write(int fd, char *str, size_t len)
{
	size_t	write_result;

	write_result = ft_write(fd, str, len);
	printf("%ld", write_result);
	// if (ft_strlen(str) == strlen(str))
	// 	return (1);
	// else
		return (0);
}

void	make_test_write(void)
{
	char	*str;

	str = strdup("Hello world");
	printf(ANSI_F_CYAN "ft_write \t " ANSI_RESET);
	print_result(test_write(1, str, strlen(str)));
	printf("\n");
}
