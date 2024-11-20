/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:14:04 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/23 13:14:15 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Aplica una función a cada carácter de una cadena, pasando el índice del carácter
 * y un puntero al carácter a la función.
 * 
 * @param s Cadena de caracteres a la que se aplicará la función.
 * @param f Función a aplicar a cada carácter de la cadena. La función toma como argumentos
 *          el índice del carácter y un puntero al carácter.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int	i;

    i = 0;
    // Recorre la cadena de caracteres
    while (s[i])
    {
        // Aplica la función al carácter actual
        f(i, &s[i]);
        i++;
    }
}
