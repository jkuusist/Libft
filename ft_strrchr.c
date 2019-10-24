/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:08:32 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/24 14:38:29 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	i = ft_strlen(s);
	ch = (unsigned char)c;
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			return (char *)(&s[i]);
		}
		i--;
	}
	return (0);
}
