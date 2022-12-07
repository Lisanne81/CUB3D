/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lhoukes <lhoukes@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 16:54:29 by lhoukes       #+#    #+#                 */
/*   Updated: 2021/03/09 10:29:59 by lhoukes       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	chc;
	char	*chs;
	int		index;

	index = 0;
	chs = (char *)s;
	chc = c;
	while (chs[index] != chc)
	{
		if (chs[index] == '\0')
		{
			return (0);
		}
		index++;
	}
	return ((char*)chs + index);
}
