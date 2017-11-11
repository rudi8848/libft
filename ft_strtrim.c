/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvynogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:41:28 by gvynogra          #+#    #+#             */
/*   Updated: 2017/11/06 15:42:04 by gvynogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isaspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	char		*dest;
	size_t		start;
	size_t		i;
	size_t		j;

	start = 0;
	i = 0;
	j = 0;
	while (ft_isaspace(s[i]))
		i++;
	start = i;
	if (i > 0 || (i == 0 && ft_strlen(s) > 0))
		i = ft_strlen(s) - 1;
	while (ft_isaspace(s[i]) && i > 0)
		i--;
	if (start >= i)
		start = 1;
	dest = (char*)malloc(sizeof(char) * (i - start + 2));
	if (!dest)
		return (NULL);
	while (start <= i)
		dest[j++] = s[start++];
	dest[j] = '\0';
	return (dest);
}
