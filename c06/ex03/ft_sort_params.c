/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcao <dcao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:02:44 by dcao              #+#    #+#             */
/*   Updated: 2023/09/25 12:53:26 by dcao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// int	ft_strcmp(char *s1, char *s2)
// {
// 	while (*s1 != '\0' && *s1 == *s2)
// 	{
// 		s1++;
// 		s2++;
// 	}
// 	return (*(unsigned char *)s1 - *(unsigned char *)s2);
// }

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// }

// char	**sort(int argc, char **argv)
// {
// 	char	*tmp;
// 	int		i;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		i = 1;
// 		while (i < argc - 1)
// 		{
// 			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
// 			{
// 				tmp = argv[i + 1];
// 				argv[i + 1] = argv[i];
// 				argv[i] = tmp;
// 			}
// 			i++;
// 		}
// 		argc--;
// 	}
// 	return (argv);
// }

// int	main(int argc, char *argv[])
// {
// 	char	**mod;
// 	int		i;

// 	mod = sort(argc, argv);
// 	i = 1;
// 	while (i < argc)
// 	{
// 		ft_putstr(argv[i]);
// 		if (i < argc - 1)
// 			write(1, "\n", 1);
// 		i++;
// 	}
// 	return (0);
// }

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

char	**ft_sort_arrays(int argc, char **argv)
{
	char	*tmp;
	int		i;

	i = 1;
	while (i < argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = tmp;
			}
			i++;
		}
		i = 1;
		argc--;
	}
	return (argv);
}

int	main(int argc, char **argv)
{
	char	**mod;
	int		i;

	mod = ft_sort_arrays(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
