/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:50:56 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:48:18 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*psrc;
	int		i;

	psrc = malloc (sizeof(char) * (ft_strlen(src) + 1));
	if (psrc != NULL)
	{
		i = 0;
		while (src[i] != '\0')
		{
			psrc[i] = src[i];
			i++;
		}
		psrc[i] = '\0';
		return (psrc);
	}
	else
		return (NULL);
}

// int	main(void)
// {
// 	printf("%s", ft_strdup("Hello World!"));
// 	return (0);
// }
