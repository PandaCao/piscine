/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <dcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:51:10 by dcao              #+#    #+#             */
/*   Updated: 2023/09/27 21:32:01 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	substring_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_sep(str[i], charset))
			i++;
	}
	return (count);
}

int	substring_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(str[i], charset))
		i++;
	return (i);
}

char	*substring(char *str, char *charset)
{
	int		i;
	char	*substring;
	int		len;

	i = 0;
	len = substring_len(str, charset);
	substring = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		substring[i] = str[i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strings;

	i = 0;
	strings = malloc((substring_count(str, charset) + 1) * sizeof(char *));
	while (*str != '\0')
	{
		while (*str != '\0' && check_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = substring(str, charset);
			i++;
		}
		while (*str && !check_sep(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

// int	main(int argc, char *argv[])
// {
// 	(void)	argc;
// 	int		i;
// 	char	**split;

// 	i = 0;
// 	split = ft_split(argv[1], argv[2]);
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// }
