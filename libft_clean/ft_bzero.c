/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:44:13 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/06 15:06:11 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*strs;

	strs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		strs[i] = 0;
		i++;
	}
}
/*
int	main(void) {
	char buffer[10];
	ft_bzero(buffer, 10);
	// Ahora, buffer contiene 10 bytes, todos establecidos a '\0'
	return (0);
}
*/
