/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvynogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:36:35 by gvynogra          #+#    #+#             */
/*   Updated: 2017/11/06 14:38:11 by gvynogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *haystack, const char *needle)
{
	size_t		i;
	size_t		j;
	char		*ptr;
	size_t		nlen;

	i = 0;
	j = 0;
	ptr = (char*)haystack;
	nlen = ft_strlen(needle);
	if (nlen == 0)
		return (ptr);
	while (haystack[i])
	{
		if (needle[j] == haystack[i])
			j++;
		else
		{
			i = i - j + 1;
			j = 0;
		}
		if (j == nlen)
			return (ptr + (i - nlen + 1));
		i++;
	}
	return (NULL);
}
