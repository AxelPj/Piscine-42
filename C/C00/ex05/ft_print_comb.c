/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:22:53 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/05 09:07:58 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				write (1, &c, 1);
				write (1, &d, 1);
				write (1, &u, 1);
				if (c < '7')
					write (1, ", ", 2);
				u++;
			}
			d++;
		}
		c++;
	}
}

int main (void)
{
	ft_print_comb();
}
