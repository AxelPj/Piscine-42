/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 18:27:18 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/25 09:15:02 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
 int main (void)
{
	printf("%d", ft_sqrt(10));
	return (0);
} */