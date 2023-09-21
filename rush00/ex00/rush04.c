/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:09:45 by dcao              #+#    #+#             */
/*   Updated: 2023/09/10 18:30:15 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_position(int position, int line, int x, int y)
{
	if (position == 1 && line == 1)
	{
		ft_putchar('A');
	}
	else if (position == x && line == y && x != 1 && y != 1)
	{
		ft_putchar('A');
	}
	else if ((position == x && line == 1) || (position == 1 && line == y))
	{
		ft_putchar('C');
	}
	else if ((line == 1 || line == y) || (position == 1 || position == x))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(32);
	}
}

void	rush(int x, int y)
{
	int	line;
	int	position;

	line = 1;
	position = 1;
	if (x > 0 && y > 0)
	{
		while (line <= y)
		{
			position = 1;
			while (position <= x)
			{
				print_position(position, line, x, y);
				position++;
			}
			line++;
			ft_putchar('\n');
		}
		ft_putchar('\n');
	}
	else
	{
		write(1, "X or Y is less than 0!!", 23);
		ft_putchar('\n');
	}
}
