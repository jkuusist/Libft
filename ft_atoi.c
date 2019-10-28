/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 14:11:57 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/28 14:04:48 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_whitespace(char c)
{
	if ((c == ' ') || (c == '\t'))
		return (1);
	if ((c == '\n') || (c == '\v') || (c == '\f') || (c == '\r'))
		return (1);
	else
		return (0);
}

static int	is_number(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (is_whitespace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
	}
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (is_number(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
