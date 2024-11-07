/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:11:13 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/25 10:46:22 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*nb;

	i = 0;
	nb = malloc((length) * sizeof (int));
	while (i < length)
	{
		nb = f(tab[i++]);
	}
	return (nb);
}
