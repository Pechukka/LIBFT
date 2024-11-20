/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:16:19 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/02 17:20:39 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copia un bloque de memoria de una ubicación a otra, manejando correctamente
 * la superposición de bloques de memoria.
 * 
 * @param dest Puntero al bloque de memoria de destino.
 * @param src Puntero al bloque de memoria de origen.
 * @param n Número de bytes a copiar.
 * @return Un puntero al bloque de memoria de destino.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char	*d;
    unsigned char	*s;

    // Convierte los punteros a unsigned char para manipular byte a byte
    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    // Si hay superposición y el origen está antes que el destino, copia de atrás hacia adelante
    if (s < d && s + n > d)
    {
        while (n--)
            d[n] = s[n];
        return (dest);
    }
    // Si no hay superposición, usa memcpy para copiar de adelante hacia atrás
    return (ft_memcpy(dest, src, n));
}
