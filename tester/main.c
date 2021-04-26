/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:16:44 by rmartins          #+#    #+#             */
/*   Updated: 2021/04/26 17:33:49 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tester.h"

void	print_result(int result)
{
	if (result == 1)
		printf(ANSI_F_GREEN "✓" ANSI_RESET);
	else
		printf(ANSI_F_RED "✗" ANSI_RESET);
}

int	main(void)
{
	make_test_strlen();
	make_test_strcpy();
	make_test_strcmp();
	return (0);
}
