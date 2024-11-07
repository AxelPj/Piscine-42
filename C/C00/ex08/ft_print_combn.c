/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:59:05 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/05 09:01:55 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int *range, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (range[i] >= range[i + 1])
			return ;
		i++;
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(range[i] + '0');
		i++;
	}
	if (range[0] < (10 - n))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	range[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (i++ < n)
		range[i] = i;
	while (range[0] <= (10 - n) && range[n - 1] <= 9)
	{
		ft_print(range, n);
		range[n - 1]++;
		i = n;
		while (i > 0 && n > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i] = 0;
				range[i - 1]++;
			}
		}
	}
}

/*int main(void)
{
	ft_print_combn(8);
}*/