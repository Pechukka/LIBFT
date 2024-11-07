/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 09:51:10 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/11 12:09:18 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Extrae una subcadena de una cadena dada, comenzando en una posición específica
 * y con una longitud determinada.
 * 
 * @param s Cadena de caracteres de la cual se extraerá la subcadena.
 * @param start Posición inicial en la cadena original desde donde comenzará la subcadena.
 * @param len Longitud máxima de la subcadena a extraer.
 * @return Un puntero a la nueva subcadena, o NULL si la asignación de memoria falla.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*ptr;
    size_t	i;

    i = 0;
    // Si la posición inicial es mayor o igual a la longitud de la cadena original,
    // retorna una cadena vacía
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    // Si la longitud especificada excede la longitud restante de la cadena desde la posición inicial,
    // ajusta la longitud a la longitud restante
    if (len > ft_strlen(s) - start)
        ptr = (char *)malloc((ft_strlen(s) - start) + 1);
    else
        ptr = (char *)malloc(len + 1);
    // Si la asignación de memoria falla, retorna NULL
    if (!ptr)
        return (NULL);
    // Copia los caracteres de la cadena original a la nueva subcadena
    while (i < len && s[start + i])
    {
        ptr[i] = s[start + i];
        i++;
    }
    // Asegura que la nueva subcadena esté terminada en nulo
    ptr[i] = '\0';
    // Retorna el puntero a la nueva subcadena
    return (ptr);
}
