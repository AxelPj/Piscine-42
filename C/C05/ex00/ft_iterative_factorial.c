/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:18:25 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/12 13:42:48 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
/* #include <stdio.h>
 int main (void)
{
	int nb;
	nb = 0;
	printf("%i", ft_iterative_factorial(nb));
} */