/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:48:16 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/18 15:11:47 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_no_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (!((base[i] >= '0' && base[i] <= '9')
				|| (base[i] >= 'A' && base[i] <= 'Z')
				|| (base[i] >= 'a' && base[i] <= 'z')))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_value(char c)
{
	int	value;

	value = 0;
	if ('A' <= c && c <= 'Z')
		value = c - 'A' + 10;
	else if ('a' <= c && c <= 'z')
		value = c - 'a' + 10;
	else if ('0' <= c && c <= '9')
		value = c - '0';
	return (value);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	sign;
	int	size;

	sign = 1;
	result = 0;
	i = 0;
	size = ft_strlen(base);
	if (!ft_no_error(base))
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && ft_no_error (base) == 1)
	{
		result = result * size + ft_value(str[i]);
		i++;
	}
	return (result * sign);
}
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	ft_atoi_base(nbr, base from)
	
} */