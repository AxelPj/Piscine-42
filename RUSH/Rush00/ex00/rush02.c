/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 10:35:26 by jmoret            #+#    #+#             */
/*   Updated: 2024/09/08 14:11:31 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if ((line == 1 && column == 1) || (line == 1 && column == x))
				ft_putchar('A');
			else if ((line == y && column == 1) || (line == y && column == x))
				ft_putchar('C');
			else if (line == 1 || line == y || column == 1 || column == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		line++;
	}
}
