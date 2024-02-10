/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:56:17 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/25 18:16:26 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned int	is_in_set(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static unsigned int	ft_size(unsigned int start, unsigned int end)
{
	unsigned int	size;

	if (end < start)
		size = 1;
	else
		size = end - start + 2;
	return (size);
}

static unsigned int	ft_end_calc(char const *s1, unsigned int end)
{
	if (s1[0] != '\0')
		end = ft_strlen(s1) - 1;
	else
		end = 0;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trim;
	unsigned int	start;
	unsigned int	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = 0;
	end = ft_end_calc(s1, end);
	while (s1[start] != '\0' && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end], set))
		end--;
	if (start > end || s1[0] == '\0')
	{
		trim = malloc(1 * sizeof(char));
		trim[0] = '\0';
		return (trim);
	}
	else
		trim = malloc((end - start + 2) * sizeof(char));
	if (trim == 0)
		return (NULL);
	ft_strlcpy(trim, &s1[start], ft_size(start, end));
	return (trim);
}

// int	main(void)
// {
// 	char const *s1 = " _ Unlock the code! _ ";
// 	char const *set = " _ ";

// 	printf("%s", ft_strtrim(s1, set));
// 	return (0);
// }