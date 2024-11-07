/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:15:32 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/06 14:25:15 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calcula la longitud de una cadena de caracteres.
 * @param s: Puntero a la cadena de caracteres.
 * @return La longitud de la cadena de caracteres, excluyendo el carácter nulo de terminación.
 */

size_t	ft_strlen(const char *s)
{
    // Variable para almacenar la longitud de la cadena
    size_t	i;

    // Inicializa la longitud a 0
    i = 0;

    // Itera sobre cada carácter de la cadena hasta encontrar el carácter nulo
    while (s[i])
        // Incrementa la longitud por cada carácter encontrado
        i++;

    // Retorna la longitud de la cadena
    return (i);
}
