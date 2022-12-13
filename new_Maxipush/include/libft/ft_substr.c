/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mla-rosa <mla-rosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:15:00 by mla-rosa          #+#    #+#             */
/*   Updated: 2022/12/12 20:31:23 by mla-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;
	size_t			len_s;

	len_s = ft_strlen(s);
	if (start > len_s)
	{
		str = malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (start + len > len_s)
		len = len_s - start;
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = -1;
	start -= 1;
	while (++i < len && s[++start])
		str[i] = s[start];
	str[i] = '\0';
	return (str);
}
