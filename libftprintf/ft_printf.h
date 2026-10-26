/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabusala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 10:57:47 by rabusala          #+#    #+#             */
/*   Updated: 2024/09/19 11:01:07 by rabusala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

int		ft_printf(const char *form, ...);
int		ft_lowhexa(unsigned int nb);
int		ft_uphexa(unsigned int nb);
int		ft_unsigned(unsigned int c);
int		ft_p(unsigned long nb);
#endif
