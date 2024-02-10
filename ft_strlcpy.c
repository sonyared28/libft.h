/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:08:02 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/19 16:26:21 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	srcsize;

	i = 0;
	srcsize = 0;
	while (src[srcsize] != 0)
		srcsize++;
	if (destsize == 0)
		return (srcsize);
	while (i < (destsize - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srcsize);
}

// int	main(void)
// {
// 	char		dest[20];
// 	const char	*source = "Hello, World!";

// 	// size_t copied = ft_strlcpy(dest, source, sizeof(dest));

// 	printf("ft_strlcpy result: %zu\n", ft_strlcpy(dest, source, sizeof(dest)));
// 	// printf("strlcpy result: %zu\n", strlcpy(dest, source, sizeof(dest)));	
// 	return (0);
// }