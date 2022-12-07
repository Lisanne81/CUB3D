/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 11:50:33 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 09:58:44 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tempdst;
	unsigned char	*tempsrc;

	tempdst = dst;
	tempsrc = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			tempdst[len] = tempsrc[len];
		}
	}
	return (dst);
}
