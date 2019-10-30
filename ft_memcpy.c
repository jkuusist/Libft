/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:53:11 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/30 14:56:21 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (!n || !src || !dst)
		return (0);
	if (src == dst)
		return (dst);
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
