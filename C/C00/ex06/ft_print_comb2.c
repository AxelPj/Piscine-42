/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:37:40 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/10 11:39:13 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	ft_putchar (x / 10 + 48);
	ft_putchar (x % 10 + 48);
}

void	ft_print_comb2(void)
{
	int	prem;
	int	sec;

	prem = 0;
	while (prem <= 98)
	{
		sec = prem + 1;
		while (sec <= 99)
		{
			ft_putnbr (prem);
			ft_putchar (' ');
			ft_putnbr(sec);
			if (prem != 98)
				write (1, ", ", 2);
			sec ++;
		}
		prem++;
	}
}

/*
int main (void)
{
	ft_print_comb2();
}
*/