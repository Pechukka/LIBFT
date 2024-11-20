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

/**
 * Concatena dos cadenas de caracteres, asegurando que la cadena resultante
 * esté correctamente terminada en nulo y no exceda el tamaño especificado.
 * 
 * @param dst Cadena de destino donde se concatenará la cadena fuente.
 * @param src Cadena fuente que se concatenará a la cadena de destino.
 * @param size Tamaño total del buffer de destino, incluyendo el espacio para el terminador nulo.
 * @return La longitud total de la cadena que se intentó crear, es decir,
 *         la longitud inicial de dst más la longitud de src.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	s;
    size_t	d;

    // Calcula la longitud de la cadena de destino
    d = ft_strlen(dst);
    s = 0;
    // Si el tamaño del buffer es menor o igual a la longitud de la cadena de destino,
    // retorna el tamaño del buffer más la longitud de la cadena fuente
    if (size <= d)
        return (size + ft_strlen(src));
    // Copia los caracteres de la cadena fuente a la cadena de destino
    while (d + s < size - 1 && src[s])
    {
        dst[d + s] = src[s];
        s++;
    }
    // Asegura que la cadena resultante esté terminada en nulo
    dst[d + s] = '\0';
    // Retorna la longitud total de la cadena que se intentó crear
    return (ft_strlen(src) + d);
}