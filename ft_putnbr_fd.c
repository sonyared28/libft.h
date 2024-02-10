/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:09:05 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/19 17:12:49 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		c = (n % 10) + '0';
		if (n >= 10)
		{
			ft_putnbr_fd((n / 10), fd);
		}
		ft_putchar_fd(c, fd);
	}
}

// int	main(void)
// {
// 	int	fd = open("file6.txt", O_CREAT | O_RDWR);

// 	if (fd == -1)
// 		return (1);
// 	ft_putnbr_fd(2147483647, fd);
// 	close(fd);
// 	return (0);
// }