/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:22:27 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/17 19:31:27 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i--;
	while (i >= 0)
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (i == 0 || !((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9'))))
		{
			str[i] = str[i] - 32;
		}
		i--;
	}
	return (str);
}
/*int main (int argc, char **argv)
{
	if (argc == 2)
	printf("%s", ft_strcapitalize(argv[1]));
}*/
