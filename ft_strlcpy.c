/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 14:12:00 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:30:39 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((i < size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	const char	src[] = "hellooooooooooo";
	size_t		size = ;
	size_t		result;

	char dst[6]; // Buffer con espacio para 6 caracteres (5 + '\0')
	result = ft_strlcpy(dst, src, size);
	printf("dst: %s\n", dst);
	printf("Length of src: %zu\n", result);
	return (0);
}
 */
