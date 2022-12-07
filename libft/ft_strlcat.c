/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lisannehoukes <lhoukes@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/18 12:06:45 by lhoukes   	   #+#    #+#                 */
/*   Updated: 2020/12/18 12:07:07 by lhoukes	   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (dstsize + srclen);
	index = 0;
	while ((src[index] != '\0') && (index + dstlen < dstsize - 1))
	{
		dst[dstlen + index] = src[index];
		index++;
	}
	dst[dstlen + index] = '\0';
	if (dstlen < dstsize)
		return (dstlen + srclen);
	return (dstsize + srclen);
}
