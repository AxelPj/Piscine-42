/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:18:00 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/05 22:49:05 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - i - `1];
		tab[size - i - 1] = swap;
		i++;
	}
}

/*int main(void)
{
	int tab[] = {1, 2, 3};
	int size = 3;
	printf("tab1: %i\ntab2: %i\ntab3: %i", tab[0], tab[1], tab[2]);
	ft_rev_int_tab(tab, size);
	printf("\ntab1: %i\ntab2: %i\ntab3: %i", tab[0], tab[1], tab[2]);
}*/
