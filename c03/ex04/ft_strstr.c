/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <dcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:17:53 by dcao              #+#    #+#             */
/*   Updated: 2023/09/24 15:58:38 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;
	int	find_size;

	i = 0;
	a = 0;
	find_size = 0;
	while (to_find[find_size] != '\0')
		find_size++;
	if (find_size == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[a] == str[i + a])
		{
			if (a == find_size - 1)
				return (str + i);
			a++;
		}
		a = 0;
		i++;
	}
	return (0);
}

// int	main()
// {
// 	char str1[] = "Hello asdasda losdssold";
// 	char str2[] = "asdasda";

// 	printf("%s\n", ft_strstr(str1, str2));
// }
