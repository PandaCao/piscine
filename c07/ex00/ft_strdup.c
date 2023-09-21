/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:24:03 by dcao              #+#    #+#             */
/*   Updated: 2023/09/20 14:36:56 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (*dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		size_src;
	char	*dest;

	if (src == NULL)
		return (NULL);
	size_src = ft_strlen(src);
	dest = malloc(size_src + 1);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
/*
int	main(void)
{
	char src[] = "AHOJ";
	printf("%s", ft_strdup(src));
}*/
