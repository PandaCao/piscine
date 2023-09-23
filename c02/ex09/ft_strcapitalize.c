/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:14:08 by dcao              #+#    #+#             */
/*   Updated: 2023/09/12 16:05:55 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char *c)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		return (1);
	}
	else if (*c >= 'a' && *c <= 'z')
	{
		return (1);
	}
	else if (*c >= '0' && *c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	func(int *new_word, int *i, char *str)
{
	if (is_alpha(&str[*i]))
	{
		if (*new_word)
		{
			if (str[*i] >= 'a' && str[*i] <= 'z')
			{
				str[*i] -= 32;
			}
			*new_word = 0;
		}
		else
		{
			if (str[*i] >= 'A' && str[*i] <= 'Z')
			{
				str[*i] += 32;
			}
		}
	}
	else
	{
		*new_word = 1;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	i;

	new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		func(&new_word, &i, str);
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "51513salut, comment tu vas ? 42mots  cinquante+et+un";
// 	printf("Original: %s\n", str);
// 	ft_strcapitalize(str);
// 	printf("Capitalized: %s\n", str);
// 	return (0);
// }
