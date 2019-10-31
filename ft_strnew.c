/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:46:39 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/31 10:39:17 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*res;

	i = 0;
	res = (char*)(malloc(sizeof(char*) * size));
	if (!res)
		return (0);
	while (i < size)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}
