/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:03:38 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:31:03 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Llena un bloque de memoria con un valor específico.
 * 
 * @param s Puntero al bloque de memoria a llenar.
 * @param c Valor a establecer en cada byte del bloque de memoria.
 * @param n Número de bytes a establecer.
 * @return Un puntero al bloque de memoria.
 */
void	*ft_memset(void *s, int c, size_t n)
{
    size_t			i;
    unsigned char	*strs;

    // Convierte el puntero a unsigned char para manipular byte a byte
    strs = (unsigned char *)s;
    i = 0;
    // Llena el bloque de memoria byte a byte con el valor especificado
    while (i < n)
    {
        strs[i] = c;
        i++;
    }
    // Retorna el puntero al bloque de memoria
    return (s);
}