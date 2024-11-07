/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:10:42 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/15 17:34:08 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Elimina los caracteres especificados de ambos extremos de una cadena de caracteres.
 * 
 * @param s1 Cadena de caracteres a recortar.
 * @param set Conjunto de caracteres a eliminar de ambos extremos de la cadena.
 * @return Un puntero a la nueva cadena recortada, o NULL si la asignación de memoria falla.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
    char	*ptr;
    int		start;
    int		end;

    start = 0;
    end = ft_strlen(s1);
    // Avanza el índice de inicio mientras los caracteres están en el conjunto
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    // Retrocede el índice de fin mientras los caracteres están en el conjunto
    while (start < end && ft_strchr(set, s1[end - 1]))
        end--;
    // Asigna memoria para la nueva cadena recortada
    ptr = (char *)malloc((end - start + 1) * sizeof(char));
    // Si la asignación de memoria falla, retorna NULL
    if (!ptr)
        return (NULL);
    // Copia la parte recortada de la cadena original a la nueva cadena
    ft_strlcpy(ptr, &s1[start], end - start + 1);
    // Retorna el puntero a la nueva cadena recortada
    return (ptr);
}
