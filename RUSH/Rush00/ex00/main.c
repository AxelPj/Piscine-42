/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:59:25 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/09 17:51:20 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 3 || x > 0 || y > 0)
	{
		x = ft_atoi(argv[1]);
		y = ft_atoi(argv[2]);
		if (x > 0 && y > 0 && x < 2147483647 && y < 2147483647)
			rush(x, y);
		else
			write(1, "Erreur 42 : va prendre un cafe t'es a.out.\n", 43);
	}
	else
		write(1, "Erreur 42 : va prendre un cafe t'es a.out.\n", 43);
	return (0);
}
