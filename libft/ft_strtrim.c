/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 15:24:30 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 10:22:05 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	ft_set_check(char c, const char *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	size_t	index;
	size_t	begin;
	size_t	end;

	if (!s1)
		return (NULL);
	begin = 0;
	while (s1[begin] && ft_set_check(s1[begin], set))
		begin++;
	end = ft_strlen(s1);
	while (end > begin && ft_set_check(s1[end - 1], set))
		end--;
	trim_str = (char *)malloc(sizeof(*s1) * (end - begin + 1));
	if (!trim_str)
		return (NULL);
	index = 0;
	while (begin < end)
	{
		trim_str[index] = s1[begin];
		index++;
		begin++;
	}
	trim_str[index] = '\0';
	return (trim_str);
}
