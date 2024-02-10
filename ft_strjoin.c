/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:03:46 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:49:22 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ttl_len;
	char	*ptr;

	ttl_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc((ttl_len) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, ttl_len);
	ft_strlcat(ptr, s2, ttl_len);
	return (ptr);
}

// int	main(void)
// {
// 	const char	*s1 = "BMW M3 ";
// 	const char	*s2 = "Competition";

// 	printf("%s", ft_strjoin(s1, s2));
// 	return (0);
// }