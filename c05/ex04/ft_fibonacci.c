/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:01:04 by dcao              #+#    #+#             */
/*   Updated: 2023/09/20 17:07:25 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index == 0)
	{
		return (0);
	}
	else if (index < 0)
	{
		return (-1);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		result += (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	}
	return (result);
}


int main(void)
{
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(10));
	printf("%d", ft_fibonacci(-1));
	return 0;
}

