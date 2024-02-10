/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:19:20 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/19 15:13:29 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

// int	main(void)
// {
// 	const char str[] = "hello .dude. goodbye";
// 	const char ch = '.';
// 	// char *res = strrchr(str, ch);

// 	printf("string after |%c| is |%s|\n", ch, ft_strrchr(str, ch));
// 	printf("string after |%c| is |%s|", ch, strrchr(str, ch));
// 	return (0);
// }