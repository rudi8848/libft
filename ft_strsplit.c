/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvynogra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:43:18 by gvynogra          #+#    #+#             */
/*   Updated: 2017/11/06 15:43:47 by gvynogra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		word_len(char const *s, int start, char c)
{
	int len;

	len = 0;
	while (s[start] == c)
		start++;
	while (s[start] != c)
	{
		len++;
		start++;
	}
	return (len);
}

static	int		words_count(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static	char	*find_word(char const *s, int start, char c)
{
	char	*word;
	int		i;

	i = 0;
	word = (char*)malloc(sizeof(char) * word_len(s, start, c) + 1);
	if (!word)
		return (NULL);
	while (s[start] == c)
		start++;
	while (s[start] != c)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**arr;
	int			i;
	int			counter;
	int			arrlen;

	i = 0;
	counter = 0;
	arrlen = words_count(s, c);
	arr = (char**)malloc(sizeof(char*) * arrlen + 1);
	if (!arr)
		return (NULL);
	while (i < arrlen && s[counter])
	{
		while (s[counter] == c)
			counter++;
		if (s[counter] != c)
		{
			arr[i] = find_word(s, counter, c);
			counter += word_len(s, counter, c);
		}
		counter++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
