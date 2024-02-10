/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:36:36 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:02:45 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if (src > dest)
	{
		while (i < (int)n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	else if (src < dest)
	{
		i = (int)n - 1;
		while (i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	const char	bufsrc[11] = "Mamba Green";
// 	char		bufdest[6] = "Green";

// 	// printf("%s\n", bufdest);
// 	ft_memmove(bufdest, bufsrc, 5);
// 	// memmove(bufdest, bufsrc, 6);
// 	printf("%s", bufdest);
// 	return (0);
// }