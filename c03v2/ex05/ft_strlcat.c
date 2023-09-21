/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:13:50 by dcao              #+#    #+#             */
/*   Updated: 2023/09/14 12:28:03 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	str_len_func(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	str_len;
	unsigned int	dest_len;

	i = 0;
	a = 0;
	while (dest[a] != '\0')
		a++;
	dest_len = a;
	str_len = str_len_func(src);
	if (size == 0 || size <= dest_len)
	{
		return (str_len + size);
	}
	while (src[i] != '\0' && (i < size - 1 - dest_len))
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (dest_len + str_len);
}

// int main()
// {
// 	char a[] = "hi";
// 	char b[] = "lol";

// 	printf("%d\n%s",ft_strlcat(a,b,6), a);
// }
