/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:36:08 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:02:54 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*buffer;
	size_t	i;

	buffer = (char *)str;
	if (n == 0)
		return (str);
	i = 0;
	while (i < n)
	{
		buffer[i] = (char)c;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	buffer[12] = "Hello World";
// 	char	buffer2[12] = "Hello World";
// 	char	c = '/';

// 	printf("%s\n", (char *)ft_memset(buffer, c, 4));
// 	printf("%s", (char *)memset(buffer2, c, 4));
// 	// buffer2 is needed bc buffer was already modified
// 	return (0);	
// }