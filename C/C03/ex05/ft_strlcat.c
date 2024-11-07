/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:28:11 by axelpeti          #+#    #+#             */
/*   Updated: 2024/09/09 13:42:19 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] != '\0' && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/* int main(void) {
    // Test 1
    char dest1[20] = "Hello";
    char src1[] = "World";
    unsigned int size1 = 15;
    unsigned int result1 = ft_strlcat(dest1, src1, size1);
    printf("Test 1:\n");
    printf("Résultat : %u\n", result1);
    printf("Chaîne concaténée : %s\n", dest1);

    // Test 2
    char dest2[10] = "Foo";
    char src2[] = "Bar";
    unsigned int size2 = 7;
    unsigned int result2 = ft_strlcat(dest2, src2, size2);
    printf("\nTest 2:\n");
    printf("Résultat : %u\n", result2);
    printf("Chaîne concaténée : %s\n", dest2);

    // Test 3
    char dest3[10] = "ABC";
    char src3[] = "DEFGHI";
    unsigned int size3 = 5;
    unsigned int result3 = ft_strlcat(dest3, src3, size3);
    printf("\nTest 3:\n");
    printf("Résultat : %u\n", result3);
    printf("Chaîne concaténée : %s\n", dest3);

    return 0;
} */