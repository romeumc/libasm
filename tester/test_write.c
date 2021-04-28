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

void	test_write(int fd, char *str, size_t len)
{
	size_t	write_result;

	write(1, "Expected\t", 9);
	write_result = write(fd, str, len);
	printf("\t len:%ld errno:%d [%s]\n", write_result, errno, strerror(errno));
	errno = 0;
	write(1, "Result\t\t", 8);
	write_result = ft_write(fd, str, len);
	printf("\t len:%ld errno:%d [%s]\n", write_result, errno, strerror(errno));
	errno = 0;
}

void	make_test_write(void)
{
	char	*str;
	int		fd;

	str = strdup("Hello world!");
	printf(ANSI_F_CYAN "\nft_write on standard output" ANSI_RESET "\n");
	test_write(1, str, strlen(str));
	printf(ANSI_F_CYAN "ft_write on invalid fd (-1)" ANSI_RESET "\n");
	test_write(-1, str, strlen(str));
	printf(ANSI_F_CYAN "ft_write on inixisting fd (42)" ANSI_RESET "\n");
	test_write(42, str, strlen(str));
	printf(ANSI_F_CYAN "ft_write on file romeu.txt" ANSI_RESET "\n");
	fd = open("romeu.txt", O_WRONLY | O_APPEND | O_CREAT, 0600);
	test_write(fd, str, strlen(str));
	printf("\n");
}
