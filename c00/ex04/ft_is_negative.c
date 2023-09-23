/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:34:04 by dcao              #+#    #+#             */
/*   Updated: 2023/09/06 21:24:49 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include <unistd.h>

void	ft_is_negative(int i)
{
	if (i >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

/*int	main(void)
{
	int	num;

	printf("Type number\n");
	scanf("%d", &num);
	printf("Number is: ");
	ft_is_negative(num);
	printf("\n");
	return (0);
}*/
