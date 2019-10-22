/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 11:32:48 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/22 12:28:37 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (((unsigned char*)src)[i] == ch)
		{
			((unsigned char*)dst)[i] = ((unsigned char *)src)[i];
			return (&(dst[i]));
		}
		((unsigned char*)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (&(dst[i]));
}
