/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:15:17 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:29:39 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Convierte un carácter en mayúscula si es una letra minúscula.
 * 
 * @param c Carácter a convertir.
 * @return El carácter convertido a mayúscula si es una letra minúscula,
 *         o el mismo carácter si no es una letra minúscula.
 */
int	ft_toupper(int c)
{
    // Verifica si el carácter es una letra minúscula
    if (c >= 97 && c <= 122)
        // Convierte el carácter a mayúscula restando 32
        c = c - 32;
    // Retorna el carácter convertido o el mismo carácter si no es una letra minúscula
    return (c);
}
