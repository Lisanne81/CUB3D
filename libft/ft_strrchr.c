/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 08:41:29 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 10:21:49 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	index;

	str = (char *)s;
	index = ft_strlen(s);
	if (c == '\0')
		return (str + index);
	while (index != 0)
	{
		if (str[index] == (char)c)
			return (str + index);
		index--;
	}
	if (s[0] == (char)c)
		return (str);
	return (0);
}
