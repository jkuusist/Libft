/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkuusist <jkuusist@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:34:57 by jkuusist          #+#    #+#             */
/*   Updated: 2019/10/23 13:42:07 by jkuusist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int c)
{
	unsigned char ch;

	ch = (unsigned char)c;
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	else
		return (ch);
}
