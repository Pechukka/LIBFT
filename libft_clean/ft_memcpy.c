/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 22:05:26 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/02 15:44:25 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*strd;
	unsigned const char	*strs;

	if (!dest && !src)
		return (0);
	i = 0;
	strd = (unsigned char *)dest;
	strs = (unsigned const char *)src;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (dest);
}
