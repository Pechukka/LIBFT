/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 19:27:14 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/11 09:46:47 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s;
	size_t	d;

	d = ft_strlen(dst);
	s = 0;
	if (size <= d)
		return (size + ft_strlen(src));
	while (d + s < size - 1 && src[s])
	{
		dst[d + s] = src[s];
		s++;
	}
	dst[d + s] = '\0';
	return (ft_strlen(src) + d);
}
/*
int	main(void) {
	char dest[12] = "Hello, ";
	char src[] = "World!";
	size_t size =15;

	size_t result = ft_strlcat(dest, src, sizeof(dest));
	printf("Destination: %s\n", dest);
	printf("Result: %zu\n", result);

	return (0);
}
*/
