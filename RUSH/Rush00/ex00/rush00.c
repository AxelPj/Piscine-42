/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 11:41:09 by glacolle          #+#    #+#             */
/*   Updated: 2024/09/09 17:52:27 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	condition(int L, char s, char m, char e)
{
	int	i;

	i = 0;
	while (i < L)
	{
		if (i == 0)
			ft_putchar(s);
		else if (i == L - 1)
			ft_putchar(e);
		else
			ft_putchar(m);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			condition(x, 'o', '-', 'o');
		else
			condition(x, '|', ' ', '|');
		i++;
	}
}
