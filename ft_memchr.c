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

/**
 * Busca la primera aparición de un carácter específico en un bloque de memoria.
 * 
 * @param s Puntero al bloque de memoria donde se realizará la búsqueda.
 * @param c Carácter a buscar.
 * @param n Número de bytes a examinar en el bloque de memoria.
 * @return Un puntero a la primera aparición del carácter en el bloque de memoria,
 *         o NULL si el carácter no se encuentra en el bloque de memoria dentro del rango especificado.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t				i;
    unsigned const char	*strs;

    // Convierte el puntero a unsigned char para manipular byte a byte
    strs = (unsigned const char *)s;
    i = 0;
    // Recorre el bloque de memoria byte a byte
    while (i < n)
    {
        // Si encuentra el carácter, retorna un puntero a su posición
        if (strs[i] == (unsigned char)c)
            return ((void *)&strs[i]);
        i++;
    }
    // Si no encuentra el carácter, retorna NULL
    return (NULL);
}
