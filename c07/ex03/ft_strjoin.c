/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:47:01 by dcao              #+#    #+#             */
/*   Updated: 2023/09/20 16:47:33 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[i] != '\0')
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total_length;

	i = 0;
	total_length = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		if (i < size -1)
		{
			total_length += ft_strlen(sep);
		}
		i++;
	}
	return (total_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		a;

	i = 0;
	a = 0;
	if (size < 0 || sep == NULL)
		return (NULL);
	result = malloc(ft_total_length(size, strs, sep) + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	while (a < size)
	{
		if (strs[a] != NULL)
		{
			ft_strcat(result, strs[a]);
			if (a < size - 1)
				ft_strcat(result, sep);
		}
		a++;
	}
	return (result);
}
