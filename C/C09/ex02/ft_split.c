/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:16:02 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/05 16:27:46 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int count_word (char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] == ' ' && str[i - 1] >= 33 && str[i - 1] <= 126)
			|| (str[i] == '	' && str[i - 1] >= 33 && str[i - 1] <= 126) 
			|| (str[i] == 12 && str[i - 1] >= 33 && str[i - 1] <= 126))
			count++;
		if (str[i] >= 33 && str[i] <= 126 && str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

char *place_word(char *str, int start, int end)
{
	int i;
	char *tab;

	i = 0;
	tab = malloc(((end - start) + 2) * sizeof(char));
	if (!tab)
		return(NULL);
	
	while (start <= end)
	{
		tab[i] = str[start];
		start++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char **ft_split (char *str)
{
	int i;
	int start;
	int j;
	char **tab;

	i = 0;
	j = 0;
	tab = malloc((count_word (str) + 1) * sizeof(char *));
	if (!tab)
		return(NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '	' || str[i] == 12)
			i++;
		start = i;
		while (str[i] && str[i] >= 33 && str[i] <= 126)
			i++;
		if (start < i)
		{
			tab[j] = place_word(str, start, i - 1);
			if (!tab[j])  // Si l'allocation échoue, libérer tout et retourner NULL
			{
				while (j > 0) 
				{
					free(tab[--j]);
				}
				free(tab);
				return NULL;
			}
			j++;
		}
	}
	tab[j] = NULL;
	return (tab);
}

int main()
{
    char **result;
    int i;

    result = ft_split("salut les amies je suis etudiant");

    // Afficher les mots
    for (i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]); // Libérer chaque mot après l'utilisation
    }

    free(result); // Libérer le tableau de pointeurs

    return 0;
}
