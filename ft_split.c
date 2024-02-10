/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skomarov <skomarov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:25:20 by skomarov          #+#    #+#             */
/*   Updated: 2023/11/18 16:47:13 by skomarov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_allocate(char **array, char const *s, char c)
{
	char		**array_p;
	char const	*temp;

	temp = s;
	array_p = array;
	while (*temp)
	{
		while (*s == c)
			s++;
		temp = s;
		while (*temp && *temp != c)
			temp++;
		if (*temp == c || temp > s)
		{
			*array_p = ft_substr(s, 0, temp - s);
			s = temp;
			array_p++;
		}
	}
	*array_p = NULL;
}

static unsigned int	ft_strs_count(char const *s, char c)
{
	unsigned int	count;	

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	unsigned int	nb_strs;

	if (s == NULL)
		return (NULL);
	nb_strs = ft_strs_count(s, c);
	array = (char **)malloc(sizeof(char *) * (nb_strs + 1));
	if (array == NULL)
		return (NULL);
	ft_allocate(array, s, c);
	return (array);
}

// int	main(void)
// {
// 	char			*s = "Mamba-Green-Fabia";
// 	char			**strings;
// 	unsigned int	i;

// 	i = 0;
// 	strings = ft_split(s, '-');
// 	if (strings != NULL)
// 	{
// 		while (strings[i] != NULL)
// 		{
// 			printf("%s\n", strings[i]);
// 			i++;
// 		}
// 		free(strings);
// 	}
// 	return (0);
// }