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

/**
 * Copia un bloque de memoria de una ubicación a otra.
 * 
 * @param dest Puntero al bloque de memoria de destino.
 * @param src Puntero al bloque de memoria de origen.
 * @param n Número de bytes a copiar.
 * @return Un puntero al bloque de memoria de destino.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t				i;
    unsigned char		*strd;
    unsigned const char	*strs;

    // Si ambos punteros son nulos, retorna 0
    if (!dest && !src)
        return (0);
    i = 0;
    // Convierte los punteros a unsigned char para manipular byte a byte
    strd = (unsigned char *)dest;
    strs = (unsigned const char *)src;
    // Copia los bytes del bloque de memoria de origen al bloque de memoria de destino
    while (i < n)
    {
        strd[i] = strs[i];
        i++;
    }
    // Retorna el puntero al bloque de memoria de destino
    return (dest);
}
