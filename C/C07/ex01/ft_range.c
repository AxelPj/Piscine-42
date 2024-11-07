/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:54:41 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/18 16:52:30 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	diff;

	diff = (max - min);
	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc ((max - min) * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < (diff))
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/* #include <stdio.h>

int main (void)
{
	int *tab;
	int i;
	i = 0;
	int max = 10;
	int min = 2;
	tab = ft_range(min, max);
	while (i < (max - min))
	{
        printf("%d\n", tab[i]);
        i++;
	}
	free (tab);
	return (0);
} */