/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:16:44 by dcao              #+#    #+#             */
/*   Updated: 2023/09/20 14:16:56 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_sqrt(196));
	printf("%d\n", ft_sqrt(13));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(-5));
	printf("%d\n", ft_sqrt(2147488281));
	return 0;
}*/
