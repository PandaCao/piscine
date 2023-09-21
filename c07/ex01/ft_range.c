/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:44:43 by dcao              #+#    #+#             */
/*   Updated: 2023/09/20 14:44:55 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	result = malloc((max - min) * sizeof(int));
	if (result == NULL)
		return (NULL);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
// int	main(void)
// {
// 	int *range = ft_range(1, 10);

//     if (range == NULL)
//     {
//         printf("Invalid input: min is greater than or equal to max\n");
//         return 1;
//     }

//     // Print the elements of the array
//     for (int i = 0; range[i] != '\0'; i++)
//     {
//         printf("%d ", range[i]);
//     }
//     printf("\n");

//     free(range); // Don't forget to free the allocated memory

//     return 0;
// }
