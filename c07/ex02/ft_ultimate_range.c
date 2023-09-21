/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:34:16 by dcao              #+#    #+#             */
/*   Updated: 2023/09/20 16:34:26 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = ptr;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (i);
}
