/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:43:12 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/03 16:05:21 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Divide una cadena de caracteres en subcadenas utilizando un delimitador específico
 * y devuelve un array de punteros a las subcadenas resultantes.
 * 
 * @param s Cadena de caracteres a dividir.
 * @param c Carácter delimitador utilizado para dividir la cadena.
 * @return Un array de punteros a las subcadenas resultantes, o NULL si la asignación de memoria falla.
 */
static size_t	ft_counter(char const *s, char c)
{
    size_t	i;
    size_t	j;

    i = 0;
    j = 0;
    // Verifica si la cadena es nula
    if (!s)
        return (0);
    // Cuenta el número de subcadenas delimitadas por el carácter c
    while (s[i])
        if (s[i++] != c && (s[i] == c || s[i] == '\0'))
            j++;
    return (j);
}

/**
 * Libera toda la memoria asignada para el array de punteros.
 * 
 * @param ptr Array de punteros a liberar.
 * @param i Número de elementos en el array.
 */
void	free_all(char **ptr, size_t i)
{
    while (i--)
        free(ptr[i]);
    free(ptr);
}

/**
 * Divide una cadena de caracteres en subcadenas utilizando un delimitador específico
 * y devuelve un array de punteros a las subcadenas resultantes.
 * 
 * @param s Cadena de caracteres a dividir.
 * @param c Carácter delimitador utilizado para dividir la cadena.
 * @return Un array de punteros a las subcadenas resultantes, o NULL si la asignación de memoria falla.
 */
char	**ft_split(char const *s, char c)
{
    char	**ptr;
    size_t	i;
    size_t	j;
    size_t	start;

    // Asigna memoria para el array de punteros, incluyendo un puntero nulo al final
    ptr = (char **)malloc((ft_counter(s, c) + 1) * sizeof(char *));
    if (!s || !ptr)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        // Encuentra el inicio de una subcadena
        while (s[i] == c)
            i++;
        start = i;
        // Encuentra el final de la subcadena
        while (s[i] && s[i] != c)
            i++;
        if (i > start)
        {
            // Asigna memoria para la subcadena y la copia al array de punteros
            ptr[j] = (char *)malloc((i - start + 1) * sizeof(char));
            if (!ptr[j])
            {
                free_all(ptr, j);
                return (NULL);
            }
            ft_strlcpy(ptr[j++], s + start, i - start + 1);
        }
    }
    // Termina el array de punteros con un puntero nulo
    ptr[j] = NULL;
    return (ptr);
}
