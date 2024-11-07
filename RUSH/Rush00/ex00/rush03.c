/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afontan <afontan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:39:31 by afontan           #+#    #+#             */
/*   Updated: 2024/09/08 10:42:16 by afontan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	cx;
	int	ly;

	ly = 1;
	while (ly <= y)
	{
		cx = 1;
		while (cx <= x)
		{
			if ((cx == 1 && ly == 1)
				|| (cx == 1 && ly == y && x != 1 && y != 1))
				ft_putchar ('A');
			else if ((cx == x && ly == 1) || (cx == x && ly == y))
				ft_putchar ('C');
			else if (cx == 1 || ly == 1 || cx == x || ly == y)
				ft_putchar ('B');
			else
				ft_putchar (' ');
			cx ++;
		}
		ft_putchar ('\n');
		ly++;
	}
}
