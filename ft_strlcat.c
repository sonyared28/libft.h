/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 11:16:53 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:49:41 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (destsize <= dest_len)
		return (src_len + destsize);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < destsize - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}

// int	main(void)
// {
// 	char		dest[20] = "Ahoj";
// 	const char	*source = "Hello, World!";

// 	printf("ft_strlcpy result: %zu\n", ft_strlcat(dest, source, sizeof(dest)));

// 	return (0);
// }