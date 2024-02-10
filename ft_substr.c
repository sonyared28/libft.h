/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:00:03 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/25 14:16:38 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if ((int)start >= ft_strlen(s))
	{
		substr = (char *)malloc(sizeof(char));
		if (substr != NULL)
			substr[0] = '\0';
		return (substr);
	}
	if ((int)(start + len) > ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	i = start;
	j = 0;
	while (s[i] != '\0' && i < start + len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = 0;
	return (substr);
}

// int	main(void)
// {
// 	char const		*s = "BMW M3 Competition ";
// 	unsigned int	start = 7;

// 	printf("%s", ft_substr(s, start, (ft_strlen(s) - start)));
// 	return (0);
// }
