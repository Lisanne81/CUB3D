/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 15:13:17 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 10:27:16 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		result;
	int		sign;
	size_t	index;

	result = 0;
	sign = 0;
	index = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n' || \
		str[index] == '\v' || str[index] == '\r' || str[index] == '\f')
		index++;
	if (str[index] == '-')
		sign = 1;
	while ((str[index] == '+' || str[index] == '-') && (str[index + 1] != '+' \
		 && str[index + 1] != '-'))
		index++;
	while (str[index] && (str[index] >= '0') && (str[index] <= '9'))
	{
		result = result * 10;
		result += (int)str[index] - '0';
		index++;
	}
	if (sign == 1)
		return (-result);
	else
		return (result);
}
