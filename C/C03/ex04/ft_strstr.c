/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:27:38 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/23 09:53:55 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && str[i + j] && to_find[j])
				j++;
			if (!to_find[j])
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/* #include <stdio.h>
char *ft_strstr(char *str, char *to_find);
int main() 
{
	char str1[] = "hello";
	char to_find1[] = "lo";
	char to_find2[] = "Hello";
	char to_find3[] = "foo";
	char to_find4[] = "";
	char str2[] = "";
	char to_find5[] = "bar";
	char str3[] = "short";
	char to_find6[] = "longer";

	// Test: Sous-chaîne au début
	printf("Test 1: %s\n", ft_strstr(str1, to_find2));

	// Test: Sous-chaîne à la fin
	printf("Test 2: %s\n", ft_strstr(str1, to_find1));

	// Test: Sous-chaîne non présente
	printf("Test 3: %s\n", ft_strstr(str1, to_find3)); 
	// Test: Sous-chaîne vide
	printf("Test 4: %s\n", ft_strstr(str1, to_find4)); 

	// Test: Chaîne principale vide
	printf("Test 5: %s\n", ft_strstr(str2, to_find2)); 

	// Test: Sous-chaîne plus longue que la chaîne principale
	printf("Test 6: %s\n", ft_strstr(str3, to_find6)); 

	// Test: Sous-chaîne au début avec un caractère différent
	char str4[] = "abc";
	char to_find7[] = "a";
	char to_find8[] = "ab";
	printf("Test 7: %s\n", ft_strstr(str4, to_find7)); 
	printf("Test 8: %s\n", ft_strstr(str4, to_find8)); 
	return 0;
} */