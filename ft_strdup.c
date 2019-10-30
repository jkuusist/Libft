/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 09:33:10 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/30 16:21:47 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*result;

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	result = malloc(len * sizeof(s1));
	if (!result)
		return (0);
	len = 0;
	while (s1[len] != '\0')
	{
		result[len] = s1[len];
		len++;
	}
	result[len] = '\0';
	return (result);
}
