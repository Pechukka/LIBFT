/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:57:40 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/10 18:16:29 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Duplica una cadena de caracteres, asignando memoria suficiente para la nueva cadena
 * y copiando el contenido de la cadena original.
 * 
 * @param s Cadena de caracteres a duplicar.
 * @return Un puntero a la nueva cadena duplicada, o NULL si la asignación de memoria falla.
 */
char	*ft_strdup(const char *s)
{
    char	*ptr;

    // Asigna memoria suficiente para la nueva cadena, incluyendo el terminador nulo
    ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
    // Si la asignación de memoria falla, retorna NULL
    if (ptr == NULL)
        return (NULL);
    // Copia el contenido de la cadena original a la nueva cadena
    ft_memcpy(ptr, s, (ft_strlen(s) + 1));
    // Retorna el puntero a la nueva cadena duplicada
    return (ptr);
}
