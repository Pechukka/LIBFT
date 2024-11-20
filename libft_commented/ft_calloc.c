/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:03:43 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/02 18:33:06 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Asigna memoria para un array de nmemb elementos de size bytes cada uno
 * y establece todos los bytes a cero.
 * 
 * @param nmemb Número de elementos.
 * @param size Tamaño de cada elemento en bytes.
 * @return Un puntero a la memoria asignada, o NULL si la asignación de memoria falla.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
    size_t	final_size;
    size_t	*ptr;

    // Si el número de elementos o el tamaño es 0, asigna un bloque de memoria de tamaño 0
    if (nmemb == 0 || size == 0)
    {
        ptr = malloc(0);
        if (ptr == NULL)
            return (NULL);
        return (ptr);
    }
    // Verifica si la multiplicación de nmemb y size causa un desbordamiento
    if (nmemb > SIZE_MAX / size)
        return (NULL);
    // Calcula el tamaño total de la memoria a asignar
    final_size = nmemb * size;
    // Asigna la memoria
    ptr = malloc(final_size);
    if (ptr == NULL)
        return (NULL);
    // Establece todos los bytes de la memoria asignada a cero
    ft_bzero(ptr, final_size);
    return (ptr);
}
