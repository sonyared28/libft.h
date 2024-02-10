/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:04:35 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/19 15:32:37 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	ttl_size;
	size_t	i;
	char	*ptr;

	ttl_size = nitems * size;
	if (nitems != 0 && ttl_size / nitems != size)
		return (NULL);
	ptr = malloc(ttl_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < ttl_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// int	main(void)
// {
// 	size_t	*ptr1;
// 	size_t	*ptr2;
// 	size_t	n;
// 	size_t	i;

// 	n = 8;
// 	ptr1 = calloc(n, sizeof(size_t));
// 	ptr2 = ft_calloc(n, sizeof(size_t));

// 	i = 0;
// 	while (i < n)
// 	{
// 		if (ptr1[i] != 0 || ptr2[i] != 0)
// 		{
// 			printf("Element at index %zu is not zero!", i);
// 			break ;
// 		}
// 		i++;
// 	}
// 	return (0);
// // instead of while in ft_calloc.c - MEMSET could be used
// }