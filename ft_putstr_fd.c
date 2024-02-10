/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:27:51 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:43:55 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// int	main(void)
// {
// 	int	fd = open("file2.txt", O_CREAT | O_WRONLY);
// 	char string[30] = "M3 competition c80 lime";

// 	if (fd == -1)
// 		return (1);
// 	ft_putstr_fd(string, fd);
// 	return (0);
// }