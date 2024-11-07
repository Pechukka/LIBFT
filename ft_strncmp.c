/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:38:26 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/06 14:32:55 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * Compara dos cadenas de caracteres hasta un número especificado de caracteres.
 * 
 * @param s1 Primera cadena de caracteres a comparar.
 * @param s2 Segunda cadena de caracteres a comparar.
 * @param n Número máximo de caracteres a comparar.
 * @return Un valor entero que indica la relación entre las cadenas:
 *         0 si las 
 * cadenas son iguales hasta n caracteres,
 *         un valor positivo si s1 es mayor que s2,
 *         un valor negativo si s1 es menor que s2.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t	i;

    i = 0;
    // Itera a través de las cadenas hasta n caracteres o hasta el final de una de las cadenas
    while (i < n && (s1[i] || s2[i]))
    {
        // Compara los caracteres actuales de ambas cadenas
        if (s1[i] != s2[i])
            // Retorna la diferencia entre los caracteres si son diferentes
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    }
    // Si todas las comparaciones son iguales, retorna 0
    return (0);
}
