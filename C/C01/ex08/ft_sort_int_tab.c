/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:18:22 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/05 21:10:33 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		size--;
	}
}

/*int main (void)
{
	int tab[] = {6, 2, 3};
	int size = 3;
	printf("tab1: %i\ntab2: %i\ntab3: %i", tab[0], tab[1], tab[2]);
	ft_sort_int_tab(tab, size);
	printf("\n\ntab1: %i\ntab2: %i\ntab3: %i\n", tab[0], tab[1], tab[2]);
}*/
