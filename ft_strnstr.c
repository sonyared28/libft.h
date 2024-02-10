/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:05:38 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:51:01 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[0] == 0)
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		if (str[i + j] == to_find[j])
		{
			while (to_find[j] != '\0')
			{
				if (str[i + j] != to_find[j])
					break ;
				if (i + j >= len)
					break ;
				j++;
			}
			if (to_find[j] == 0)
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	string[] = "yes Fabia Skoda ....";
// 	char	substring[30] = "Fabia";

// 	printf("String is: %s\n", string);
// 	printf("Substring is: %s\n", substring);
// 	printf("Location is: %s", ft_strnstr(string, substring, 8));
// 	// printf("Location is: %d", strnstr(string, substring, 3));
// 	return (0);
// }