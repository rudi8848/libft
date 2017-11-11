/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvynogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:13:33 by gvynogra          #+#    #+#             */
/*   Updated: 2017/11/06 15:14:52 by gvynogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*str;
	size_t		i;

	i = 0;
	str = (char*)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	else
		while (i < size + 1)
		{
			str[i] = '\0';
			i++;
		}
	return (str);
}