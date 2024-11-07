/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:52:01 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/23 13:56:05 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*full_join(char *join, char **strs, int size, char *sep)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = join;
	while (i < size)
	{
		tmp = ft_strcpy(tmp, strs[i]);
		tmp += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			tmp = ft_strcpy(tmp, sep);
			tmp += ft_strlen(sep);
		}
		i++;
	}
	return (join);
}

int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	get_size;

	i = -1;
	get_size = 0;
	while (++i < size)
		get_size += ft_strlen(strs[i]);
	if (size > 0)
		get_size += ft_strlen(sep) * (size - 1);
	return (get_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join;
	int		full_len;

	if (size == 0)
	{
		join = (char *)malloc(sizeof(char));
		if (!join)
			return (NULL);
		join[0] = '\0';
		return (join);
	}
	full_len = get_size(size, strs, sep);
	join = (char *)malloc((full_len + 1) * sizeof(char));
	if (!join)
		return (NULL);
	join = full_join(join, strs, size, sep);
	join[full_len] = '\0';
	return (join);
}

/* #include <stdio.h>
int main(void)
{
	int i;
	i = 0;
	char *strings[] = {"", ""};
	char *sep = "/";
	char *result = ft_strjoin(1, strings, sep);
 	while (strings[i])
	{
		printf("%s", strings[i]);
		i++;
	} 
	printf("Résultat: %s\n", result);

	free(result);

	return 0;
} */