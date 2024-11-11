/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:28:24 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/11 09:53:03 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatena dos cadenas de caracteres en una nueva cadena, asignando memoria suficiente
 * para la nueva cadena y copiando el contenido de las dos cadenas originales.
 * 
 * @param s1 Primera cadena de caracteres a concatenar.
 * @param s2 Segunda cadena de caracteres a concatenar.
 * @return Un puntero a la nueva cadena concatenada, o NULL si la asignación de memoria falla.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
    char	*ptr;

    // Asigna memoria suficiente para la nueva cadena, incluyendo el terminador nulo
    ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
    // Si la asignación de memoria falla, retorna NULL
    if (!ptr)
        return (NULL);
    // Copia la primera cadena a la nueva cadena
    ft_memcpy(ptr, s1, ft_strlen(s1) + 1);
    // Concatena la segunda cadena a la nueva cadena
    ft_strlcat(ptr, s2, (ft_strlen(ptr) + ft_strlen(s2) + 1));
    // Retorna el puntero a la nueva cadena concatenada
    return (ptr);
}
