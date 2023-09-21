/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:17:53 by dcao              #+#    #+#             */
/*   Updated: 2023/09/12 17:57:58 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*find_ptr;

	while (*str != '\0')
	{
		str_ptr = str;
		find_ptr = to_find;
		while (*str_ptr == *find_ptr && *find_ptr != '\0')
		{
			str_ptr++;
			find_ptr++;
		}
		if (*find_ptr == '\0')
		{
			return (str_ptr);
		}
		str++;
	}
	return (str_ptr);
}

// int	main()
// {
// 	char str1[] = "Hello asdasda losdssold";
// 	char str2[] = "asdasda";

// 	printf("%s\n", ft_strstr(str1, str2));
// }
