/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmartins <rmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:15:14 by rmartins          #+#    #+#             */
/*   Updated: 2021/04/27 12:57:39 by rmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTER_H
# define TESTER_H

# include "../inc/libasm.h"
# include "../inc/ft_ansi.h"
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <fcntl.h>

void	print_result(int result);
void	make_test_strlen(void);
void	make_test_strcpy(void);
void	make_test_strcmp(void);
void	make_test_write(void);
void	make_test_read(void);
void	make_test_strdup(void);

#endif
