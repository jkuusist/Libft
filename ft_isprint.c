/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:58:30 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/30 11:10:52 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if ((ch >= 32) && (ch <= 126))
		return (1);
	else
		return (0);
}
