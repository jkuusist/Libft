/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 11:07:05 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/21 12:35:12 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t result;

	i = ft_strlen(dst);
	j = 0;
	result = ft_strlen(src);
	if (dstsize == 0)
		return (result);
	if (dstsize < i)
		result += dstsize;
	else
		result += i;
	while ((src[j] != '\0') && (i < dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (result);
}
