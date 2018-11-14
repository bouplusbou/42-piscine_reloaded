/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboucher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:58:42 by bboucher          #+#    #+#             */
/*   Updated: 2018/11/08 10:28:09 by bboucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int c, char **v)
{
	if (c == 1)
		ft_putstr("File name missing.\n");
	if (c > 2)
		ft_putstr("Too many arguments.\n");
	if (c == 2)
		ft_display_file(v[1]);
	return (0);
}
