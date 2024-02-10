/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:01:13 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/19 13:53:36 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (str1[i] == str2[i]))
		i++;
	if (i < n)
		return (str1[i] - str2[i]);
	return (0);
}

// int	main(void)
// {
// 	char s1[60] = "M3 competition is cool";
// 	char s2[60] = "M3 competition is cool, but only in lime color";

// 	int result = ft_memcmp(s1, s2, 23);

// 	printf("%d\n", memcmp(s1, s2, 23));
// 	// printf("%d", ft_memcmp(s1, s2, 23));
// 	if (result > 0)
// 	{
// 		printf("%d\n", result);
// 		printf("The strings are different, 
// and the String1 is GREATER than String2");
// 	}
// 	else if (result == 0)	
// 	{
// 		printf("%d\n", result);
// 		printf("The strings are the same");
// 	}
// 	else
// 	{
// 		printf("%d\n", result);
// 		printf("The strings are different, 
// and the String1 is LESS than String2");
// 	}
// }