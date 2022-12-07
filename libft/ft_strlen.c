/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 08:31:21 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 10:04:07 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	strlength;

	strlength = 0;
	while (str[strlength] != '\0')
	{
		strlength++;
	}
	return (strlength);
}
