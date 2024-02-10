/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:25:11 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:55:36 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_toupper(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z' && i >= 0)
// 		*c = *c - 'a' + 'A';
// }

// int	main(void)
// {
// 	char orig_str[] = "M3 competition";
// 	ft_striteri(orig_str, ft_toupper);

// 	printf("%s\n", orig_str);
// 	return (0);
// }