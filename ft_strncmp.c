/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:52:54 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/26 13:29:21 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[60] = "M3 competition is cool, but only in lime color";
// 	char s2[60] = "M3 competition is cool";

// 	int result = ft_strncmp(s1, s2, 23);

// 	if (result > 0)
// 		printf("The strings are different,
// and the String1 is GREATER than String2");
// 	else if (result == 0)
// 		printf("The strings are the same");
// 	else
// 		printf("The strings are different,
// and the String1 is LESS than String2");
// }