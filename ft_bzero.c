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

/**
 * Establece todos los bytes de un bloque de memoria a cero.
 * 
 * @param s Puntero al bloque de memoria a establecer.
 * @param n Número de bytes a establecer a cero.
 */
void	ft_bzero(void *s, size_t n)
{
    size_t			i;
    unsigned char	*strs;

    // Convierte el puntero a unsigned char para manipular byte a byte
    strs = (unsigned char *)s;
    i = 0;
    // Establece cada byte del bloque de memoria a cero
    while (i < n)
    {
        strs[i] = 0;
        i++;
    }
}
