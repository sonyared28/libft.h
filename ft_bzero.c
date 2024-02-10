/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:13:32 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:00:30 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*buffer;
	size_t	i;

	buffer = (char *)str;
	i = 0;
	while (i < n)
	{
		buffer[i] = '\0';
		i++;
	}
}

// int	main(void)
// {
// 	char	buffer[11] = "Mamba Green";
// 	char	buffer2[11] = "Mamba Green";
// 	size_t	i;

// 	ft_bzero(buffer, 5);
// 	i = 0;
// 	while (i < sizeof(buffer))
// 	{
// 		printf("%d\t", buffer[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	bzero(buffer2, 5);
// 	while (i < sizeof(buffer2))
// 	{
// 		printf("%d\t", buffer2[i]);
// 		i++;
// 	}
// 	return (0);
// }