/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 10:26:03 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/08 10:26:03 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	column;

	line = 1;
	while (line <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((line == 1 && column == 1)
				|| (line == y && column == x && x != 1 && y != 1))
				ft_putchar('/');
			else if ((line == y && column == 1) || (line == 1 && column == x))
				ft_putchar('\\');
			else if (line == 1 || line == y || column == 1 || column == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
