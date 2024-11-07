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

/**
 * Copia una cadena de caracteres a un buffer de destino, asegurando que la cadena resultante
 * esté correctamente terminada en nulo y no exceda el tamaño especificado.
 * 
 * @param dst Buffer de destino donde se copiará la cadena fuente.
 * @param src Cadena fuente que se copiará al buffer de destino.
 * @param dstsize Tamaño total del buffer de destino, incluyendo el espacio para el terminador nulo.
 * @return La longitud de la cadena fuente.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t	i;

    i = 0;
    // Si el tamaño del buffer es mayor que 0, copia los caracteres de la cadena fuente
    if (dstsize > 0)
    {
        // Copia los caracteres de la cadena fuente al buffer de destino
        while (src[i] && i < dstsize - 1)
        {
            dst[i] = src[i];
            i++;
        }
        // Asegura que la cadena resultante esté terminada en nulo
        dst[i] = '\0';
    }
    // Retorna la longitud de la cadena fuente
    return (ft_strlen(src));
}