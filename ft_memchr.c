/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:55:18 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/06 14:20:23 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*strs;

	strs = (unsigned const char *)s;
	i = 0;
	while (i < n)
	{
		if (strs[i] == (unsigned char)c)
			return ((void *)&strs[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void) {
	char buffer[] = "Hello, world!";
	char *result;

	result = ft_memchr(buffer, 'w', sizeof(buffer));
	if (result != NULL) {
		printf("Character 'w' found at position: %ld\n", result - buffer);
	} else {
		printf("Character 'w' not found\n");
	}

	return (0);
}
*/
