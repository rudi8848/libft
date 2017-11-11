/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvynogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:34:29 by gvynogra          #+#    #+#             */
/*   Updated: 2017/11/06 15:35:36 by gvynogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;
	char	*t1;
	char	*t2;

	t1 = (char*)s1;
	t2 = (char*)s2;
	i = 0;
	while (t1[i] == t2[i] && t1[i] && t2[i] && n)
	{
		i++;
		n--;
	}
	if (t1[i] - t2[i] == 0)
		return (1);
	else
		return (0);
}
