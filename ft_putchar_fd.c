/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:18:44 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:03:09 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(void)
// {
// 	int	fd = open("file.txt", O_CREAT | O_WRONLY);

// 	if (fd == -1)
// 		return (1);

// 	ft_putchar_fd('a', fd);
// 	close(fd);
// 	return (0);
// }