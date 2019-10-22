/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 12:30:14 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/22 13:16:11 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*charsrc;
	char	*chardest;
	size_t	i;
	char	*temp;

	charsrc = (char*)src;
	chardest = (char*)dst;
	i = 0;
	temp = (char*)malloc(len);
	while (i < len)
	{
		temp[i] = charsrc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		chardest[i] = temp[i];
		i++;
	}
	free(temp);
	return (dst);
}
