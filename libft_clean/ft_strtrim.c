/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:10:42 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/15 17:34:08 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	ptr = (char *)malloc((end - start + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, &s1[start], end - start + 1);
	return (ptr);
}
/* #include <stdio.h>

int	main(void)
{
	char *s1 = "   Hello, World!   ";
	char *set = " ";
	char *trimmed_str;

	trimmed_str = ft_strtrim(s1, set);
	if (trimmed_str)
	{
		printf("Original string: '%s'\n", s1);
		printf("Trimmed string: '%s'\n", trimmed_str);
		free(trimmed_str);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	return (0);
} */
