/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:35:06 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/22 10:50:10 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	//unsigned char	*p;

	if (n != 0)
	{
		i = 0;
		//p = (unsigned char *)s;
		while (i < n)
		{
			((unsigned char *)s)[i] = 0;
			i++;
		}
	}
}
