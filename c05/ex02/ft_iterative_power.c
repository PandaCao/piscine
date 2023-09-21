/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:58:59 by dcao              #+#    #+#             */
/*   Updated: 2023/09/20 13:59:30 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
	{
		return (0);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}

// int main (void)
// {
// 	printf("%d\n", ft_iterative_power(4, 0));
// 	printf("%d\n", ft_iterative_power(4, -1));
// 	printf("%d\n", ft_iterative_power(4, 3));
// 	printf("%d", ft_iterative_power(0, 0));
// }
