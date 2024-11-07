/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:41:57 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/08 17:54:51 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Busca la primera aparición de una subcadena dentro de otra cadena,
 * pero solo hasta un número especificado de caracteres.
 * 
 * @param big Cadena en la que se busca la subcadena.
 * @param little Subcadena que se busca.
 * @param len Número máximo de caracteres a buscar.
 * @return Un puntero a la primera aparición de la subcadena en la cadena principal,
 *         o NULL si la subcadena no se encuentra dentro del límite especificado.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t	i;
    size_t	j;

    i = 0;
    // Si la subcadena es vacía, retorna la cadena principal
    if (*little == '\0')
        return ((char *)big);
    // Itera a través de la cadena principal hasta el límite especificado
    while ((big[i]) && (i < len))
    {
        j = 0;
        // Compara la subcadena con la cadena principal
        while (((big[i + j] == little[j]) && (i + j < len)))
        {
            // Si se encuentra la subcadena completa, retorna el puntero a la posición inicial
            if (little[j + 1] == '\0')
                return ((char *)&big[i]);
            j++;
        }
        i++;
    }
    // Si no se encuentra la subcadena, retorna NULL
    return (NULL);
}
