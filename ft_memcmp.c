/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:57:13 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:31:17 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compara dos bloques de memoria byte a byte.
 * 
 * @param s1 Puntero al primer bloque de memoria.
 * @param s2 Puntero al segundo bloque de memoria.
 * @param n Número de bytes a comparar.
 * @return Un valor entero menor que, igual a, o mayor que cero si el primer bloque de memoria es,
 *         respectivamente, menor que, igual a, o mayor que el segundo bloque de memoria.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t				i;
    unsigned const char	*str1;
    unsigned const char	*str2;

    // Convierte los punteros a unsigned char para manipular byte a byte
    str1 = (unsigned const char *)s1;
    str2 = (unsigned const char *)s2;
    i = 0;
    // Recorre los bloques de memoria byte a byte
    while (i < n)
    {
        // Compara los bytes actuales de ambos bloques de memoria
        if (str1[i] != str2[i])
            // Retorna la diferencia entre los bytes si son diferentes
            return (str1[i] - str2[i]);
        i++;
    }
    // Si todos los bytes son iguales, retorna 0
    return (0);
}
