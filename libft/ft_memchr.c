/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 16:58:34 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 09:56:43 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp_s;
	size_t			index;

	temp_s = (unsigned char *)s;
	index = 0;
	while (n > index)
	{
		if (temp_s[index] == (unsigned char)c)
			return (&temp_s[index]);
		index++;
	}
	return (0);
}
