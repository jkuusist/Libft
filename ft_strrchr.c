/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 13:08:32 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/21 14:44:59 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = (int)ft_strlen(s) - 1;
	ch = (char)c;
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			return (char *)(s);
		}
		i--;
	}
	return (0);
}
