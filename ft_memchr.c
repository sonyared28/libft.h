/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:21:41 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/19 13:35:20 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*p_str;
	size_t	i;

	i = 0;
	p_str = (char *)str;
	if (str == NULL)
		return (NULL);
	while (i < n)
	{
		if (p_str[i] == (char)c)
			return (&p_str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char str[] = "hello .dude.";
// 	const char ch = '.';

// 	printf("string after |%c| is |%s|\n", ch, (char *)ft_memchr(str, ch, 9));
// 	printf("string after |%c| is |%s|", ch, (char *)memchr(str, ch, 9));
// 	return (0);
// }