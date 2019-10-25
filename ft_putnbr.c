/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 13:31:01 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/25 13:56:37 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		ft_putchar('-');
	}
	else
		i = n;
	if ((n / 10) > 0)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + 48);
}