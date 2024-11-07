/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:29:51 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/18 14:32:48 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	no_error(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) <= 1)
		return (0);
	i = 0;
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-'
				|| base[i] <= ' ' || base[i] > 126 || base[j] == '+'
				|| base[j] == '-' || base[j] <= ' ' || base[j] > 126)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			mod;
	int			nbr_divided;
	int			size;
	long int	nb;

	nb = (long int)nbr;
	if (!no_error(base))
		return ;
	size = ft_strlen(base);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= size)
	{
		mod = nb % size;
		nbr_divided = nb / size;
		ft_putnbr_base(nbr_divided, base);
	}
	if (nb >= size)
		ft_putchar(base[mod]);
	else
		ft_putchar(base[nb]);
}

int main (void)
{
	ft_putnbr_base(15, "01");
}