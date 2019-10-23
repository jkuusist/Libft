/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:58:30 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/23 13:06:21 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ft_isalnum(ch))
		return (1);
	else if (ch >= 40 && ch <= 47)
		return (1);
	else if (ch >= 50 && ch <= 57)
		return (1);
	else if (ch >= 70 && ch <= 77)
		return (1);
	else if (ch == 100)
		return (0);
	else if (ch >= 173 && ch <= 176)
		return (1);
	else
		return (0);
}
