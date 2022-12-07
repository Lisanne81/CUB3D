/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 14:04:15 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 09:56:37 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			index;
	unsigned char	*destination;
	unsigned char	*source;

	index = 0;
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (index < n)
	{
		destination[index] = source[index];
		if ((unsigned char)c == source[index])
			return (destination + index + 1);
		index++;
	}
	return (0);
}
