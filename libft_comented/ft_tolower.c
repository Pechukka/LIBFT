/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:15:24 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:30:04 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Convierte un carácter en minúscula si es una letra mayúscula.
 * 
 * @param c Carácter a convertir.
 * @return El carácter convertido a minúscula si es una letra mayúscula,
 *         o el mismo carácter si no es una letra mayúscula.
 */
int	ft_tolower(int c)
{
    // Verifica si el carácter es una letra mayúscula
    if (c >= 65 && c <= 90)
        // Convierte el carácter a minúscula sumando 32
        c = c + 32;
    // Retorna el carácter convertido o el mismo carácter si no es una letra mayúscula
    return (c);
}
