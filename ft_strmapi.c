/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 13:45:57 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:50:29 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	ft_toupper(unsigned int i, char c)
// {
// 	if (c >= 'a' && c <= 'z' && i >= 0)
// 		return (c - 'a' + 'A');
// 	return (c);
// }

// int	main(void)
// {
// 	char *orig_str = "M3 competition";
// 	char *transf_str = ft_strmapi(orig_str, ft_toupper);

// 	printf("%s\n", orig_str);
// 	printf("%s", transf_str);
// 	return (0);
// }