/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:12:41 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/23 13:13:36 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Aplica una función a cada carácter de una cadena de caracteres, creando una nueva cadena
 * con los resultados de la función aplicada.
 * 
 * @param s Cadena de caracteres a la que se aplicará la función.
 * @param f Función que se aplicará a cada carácter de la cadena. La función toma como argumentos
 *          el índice del carácter y el propio carácter.
 * @return Un puntero a la nueva cadena con los resultados de la función aplicada,
 *         o NULL si la asignación de memoria falla o si los argumentos son nulos.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
    char			*ptr;

    // Verifica si los argumentos son nulos
    if (!s || !f)
        return (NULL);
    // Asigna memoria para la nueva cadena
    ptr = (char *)malloc(ft_strlen(s) + 1);
    // Si la asignación de memoria falla, retorna NULL
    if (!ptr)
        return (NULL);
    i = 0;
    // Aplica la función a cada carácter de la cadena original
    while (s[i])
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    // Asegura que la nueva cadena esté terminada en nulo
    ptr[i] = '\0';
    // Retorna el puntero a la nueva cadena
    return (ptr);
}
