/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvynogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:32:38 by gvynogra          #+#    #+#             */
/*   Updated: 2017/11/06 15:33:21 by gvynogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;
	char	*t1;
	char	*t2;

	t1 = (char*)s1;
	t2 = (char*)s2;
	i = 0;
	while (t1[i] == t2[i] && t1[i] && t2[i])
	{
		i++;
	}
	if (t1[i] - t2[i] == 0)
		return (1);
	else
		return (0);
}
