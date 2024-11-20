/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:14:59 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/08 17:22:26 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Busca la última aparición de un carácter en una cadena.
 * @param s: Puntero a la cadena de caracteres.
 * @param c: Carácter a buscar.
 * @return Un puntero a la última aparición del carácter en la cadena, o NULL si no se encuentra.
 */
char	*ft_strrchr(const char *s, int c)
{
    // Variable para iterar sobre la cadena
    int		i;
    // Puntero para almacenar la última aparición del carácter
    char	*last_occurrence;

    // Inicializa el índice a 0
    i = 0;
    // Inicializa el puntero de la última aparición a NULL
    last_occurrence = NULL;

    // Itera sobre cada carácter de la cadena
    while (s[i])
    {
        // Si se encuentra el carácter, actualiza el puntero de la última aparición
        if (s[i] == (unsigned char)c)
            last_occurrence = (char *)&s[i];
        i++;
    }

    // Verifica si el carácter nulo de terminación es el carácter buscado
    if (s[i] == (unsigned char)c)
        return ((char *)&s[i]);

    // Retorna el puntero a la última aparición del carácter, o NULL si no se encontró
    return (last_occurrence);
}
