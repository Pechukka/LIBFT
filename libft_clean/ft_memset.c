/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:03:38 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:31:03 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*strs;

	strs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		strs[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void) {
	// Define un buffer de 50 bytes
	char buffer[20];

	// Llena todo el buffer con el carácter 'A'
	ft_memset(buffer, 65, 10);
	ft_memset(buffer + 10, 'x', 10);

	// Imprime el contenido del buffer
	for (int i = 0; i < 50; i++) {
		printf("%c ", buffer[i]);
	}

	return (0);
}
*/
