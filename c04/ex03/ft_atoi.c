/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:40:08 by dcao              #+#    #+#             */
/*   Updated: 2023/09/14 15:51:13 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_spaces(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	return (str);
}

char	*ft_plusminus(char *str, int *parity)
{
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			(*parity)++;
		str++;
	}
	return (str);
}

int	ft_atoi(char *str)
{
	int		parity;
	int		res;
	char	*res_string;

	res_string = ft_spaces(str);
	parity = 0;
	res = 0;
	res_string = ft_plusminus(res_string, &parity);
	while (*res_string >= 48 && *res_string <= 57)
	{
		res *= 10;
		res += *res_string - 48;
		res_string++;
	}
	if (parity % 2)
		return (-res);
	return (res);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi(" ---+--+1234567ab567"));
// }
