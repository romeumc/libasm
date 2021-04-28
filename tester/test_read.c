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

void	test_read(int fd, char *buffer, int len)
{
	write(1, "Expected\t", 9);
	read(fd, buffer, len);
	printf("\t errno:%d [%s]\n", errno, strerror(errno));
	errno = 0;
	write(1, "Result\t\t", 8);
	ft_read(fd, buffer, len);
	printf("\t errno:%d [%s]\n", errno, strerror(errno));
	errno = 0;
}

void	make_test_read(void)
{
	char	buffer[100];
	int		fd;

	//buffer = strdup("Hello world!");
	// printf(ANSI_F_CYAN "\nft_read on standard output" ANSI_RESET "\n");
	// test_read(1, buffer, 100);
	printf(ANSI_F_CYAN "ft_read on invalid fd (-1)" ANSI_RESET "\n");
	test_read(-1, buffer, 100);
	printf(ANSI_F_CYAN "ft_read on inixisting fd (42)" ANSI_RESET "\n");
	test_read(42, buffer, 100);
	printf(ANSI_F_CYAN "ft_read on file romeu.txt" ANSI_RESET "\n");
	fd = open("romeu.txt", O_RDONLY);
	test_read(fd, buffer, 100);
	printf("\n");
}
