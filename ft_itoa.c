/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 14:43:58 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/28 11:09:55 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	numlen(int num)
{
	int len;

	len = 0;
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*res;

	i = numlen(n);
	if (!(res = malloc(sizeof(char*) * (i + 1))))
		return (0);
	if (n == -2147483648)
	{
		ft_strcpy(res, "-2147483648\0");
		return (res);
	}
	if ((sign = n) < 0)
	{
		n = -n;
		res[0] = '-';
	}
	res[i--] = '\0';
	while (n > 0)
	{
		res[i--] = n % 10 + 48;
		n /= 10;
	}
	return (res);
}
