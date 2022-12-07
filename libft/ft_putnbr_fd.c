/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 09:22:02 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 10:02:15 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	number;

	number = n;
	if (number == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (number < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-number, fd);
	}
	else if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd(number % 10 + '0', fd);
	}
	else
		ft_putchar_fd(number + 48, fd);
}
