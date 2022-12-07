/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/21 08:07:40 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 10:22:15 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	index;
	size_t	tracker;

	if (s == NULL)
		return (NULL);
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (0);
	index = 0;
	tracker = 0;
	while (s[index])
	{
		if (index >= start && tracker < len)
		{
			substr[tracker] = s[index];
			tracker++;
		}
		index++;
	}
	substr[tracker] = '\0';
	return (substr);
}
