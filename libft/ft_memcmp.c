/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 18:40:17 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 10:28:44 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*comp1;
	unsigned char	*comp2;

	comp1 = (unsigned char *)s1;
	comp2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*comp1 != *comp2)
			return (*comp1 - *comp2);
		comp1++;
		comp2++;
		n--;
	}
	return (0);
}
