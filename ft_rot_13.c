/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot_13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvynogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 09:34:56 by gvynogra          #+#    #+#             */
/*   Updated: 2017/11/15 09:40:46 by gvynogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rot_13(char *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = ((s[i] - 'a') + 13) % 26 + 'a';
			else if ((s[i] >= 'A' && s[i] <= 'Z'))
				s[i] = ((s[i] - 'A') + 13) % 26 + 'A';
			i++;
		}
	}
}
