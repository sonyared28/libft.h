/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:19:20 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/19 15:10:29 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

// int	main(void)
// {
// 	const char str[] = "hello .dude.";
// 	const char ch = '.';

// 	printf("string after |%c| is |%s|\n", ch, ft_strchr(str, ch));
// 	printf("string after |%c| is |%s|", ch, strchr(str, ch));
// 	return (0);
// }