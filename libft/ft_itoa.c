/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 14:24:26 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/10/20 14:51:37 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_size_nbr(int n)
{
	int				nbr;

	nbr = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		nbr++;
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	char			*result;
	unsigned int	length;
	long			placeholder;

	placeholder = (long)n;
	result = NULL;
	length = ft_size_nbr(placeholder) + (n < 0);
	if (n < 0)
		placeholder = (placeholder * -1);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);
	result[length] = '\0';
	while (length > 0)
	{
		result[length - 1] = (placeholder % 10) + '0';
		length--;
		placeholder = placeholder / 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}

/*int main()
{
	printf("result: %s\n", ft_itoa(-66));
	printf("result: %s\n", ft_itoa(13101981));
	printf("result: %s\n", ft_itoa(-2147483648));
	printf("result: %s\n", ft_itoa(0));
	printf("the outcome is: %s\n", ft_itoa(1981));
	printf("the outcome is: %s\n", ft_itoa(+123));
	printf("the outcome is: %s\n", ft_itoa(NULL));
	system("leaks a.out");
	return (0);
}
*/