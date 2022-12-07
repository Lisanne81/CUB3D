/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 12:20:27 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 09:59:57 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*container;

	container = (unsigned char *)b;
	while (len > 0)
	{
		*container = (unsigned char)c;
		container++;
		len--;
	}
	return (b);
}
