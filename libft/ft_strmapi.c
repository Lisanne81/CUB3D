/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/22 15:17:32 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/11/02 17:37:13 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	counter;
	char			*new_str;

	if (s == NULL || f == NULL)
		return (NULL);
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (new_str == NULL)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		new_str[counter] = f(counter, s[counter]);
		counter++;
	}
	new_str[counter] = '\0';
	return (new_str);
}
// static char 		ft_f(unsigned int i, char c)
// {
// 		if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else
// 		return (c);
// }

// int main()
// {
// 	char str_13[] = "dont Panic!";
// 	printf("This is what you get: %s\n", ft_strmapi(str_13, ft_f));
// 	printf("\n");
// }