/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:09:58 by dcao              #+#    #+#             */
/*   Updated: 2023/09/11 20:01:45 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50];
	char	src[5];

	src[0] = 'A';
	src[1] = 'H';
	src[2] = 'O';
	src[3] = 'J';
	src[4] = '\0';
	ft_strcpy(dest, src);
	return (0);
}*/
