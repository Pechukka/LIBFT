/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:15:38 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/11 12:26:30 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Busca la primera aparición de un carácter en una cadena.
 * @param s: Puntero a la cadena de caracteres.
 * @param c: Carácter a buscar.
 * @return Un puntero a la primera aparición del carácter en la cadena, o NULL si no se encuentra.
 */
char	*ft_strchr(const char *s, int c)
{
    // Variable para iterar sobre la cadena
    int	i;

    // Inicializa el índice a 0
    i = 0;

    // Itera sobre cada carácter de la cadena hasta encontrar el carácter buscado o el final de la cadena
    while ((s[i]) && (s[i] != (unsigned char)c))
        i++;

    // Si se encuentra el carácter, retorna un puntero a su posición en la cadena
    if (s[i] == (unsigned char)c)
        return ((char *)&s[i]);

    // Si no se encuentra el carácter, retorna NULL
    return (NULL);
}
