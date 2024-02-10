/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:55:01 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/19 12:55:24 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || dest == NULL || src == NULL)
		return (dest);
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	const char	bufsrc[6] = "Mamba";
// 	char		bufdest[11] = "Green Mamba";

// 	// printf("%s\n", bufdest);
// 	ft_memcpy(bufdest, bufsrc, 6);
// 	// memcpy(bufdest, bufsrc, 6);
// 	printf("%s", bufdest);
// 	return (0);
// }