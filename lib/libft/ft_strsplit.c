/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstroh <cstroh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 14:57:09 by lboudaa           #+#    #+#             */
/*   Updated: 2014/06/15 18:29:27 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*add_word(char const *s, int *i, char c)
{
	int		size;
	char	*word;
	int		j;

	size = *i;
	j = 0;
	while (s[size] != c)
		size++;
	size = size - *i;
	word = (char *)malloc(sizeof(char) * size + 1);
	while (s[*i] != c && s[*i])
		word[j++] = s[(*i)++];
	word[j] = '\0';
	return (word);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	words = ft_count_words(s, c);
	str = (char **)malloc(sizeof(char *) * words + 1);
	while (j < words)
	{
		while (s[i] == c)
			i++;
		str[j++] = add_word(s, &i, c);
	}
	str[j] = '\0';
	return (str);
}
