/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:45:27 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/23 13:47:32 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	else
		return (ch);
}
