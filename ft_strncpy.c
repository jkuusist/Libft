/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 09:33:31 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/21 09:33:36 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strncpy(char * dst, const char * src, size_t len)
{
	size_t i;
	size_t srclen;

	i = 0;
	srclen = strlen(src);
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
