/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:15:56 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:32:11 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Verifica si un carácter pertenece al conjunto de caracteres ASCII.
 * 
 * @param c Carácter a verificar.
 * @return 1 si el carácter pertenece al conjunto de caracteres ASCII (valores entre 0 y 127),
 *         o 0 si el carácter no pertenece al conjunto de caracteres ASCII.
 */
int	ft_isascii(int c)
{
    // Verifica si el carácter está en el rango de los caracteres ASCII
    if (c >= 0 && c <= 127)
        return (1);
    // Retorna 0 si el carácter no está en el rango de los caracteres ASCII
    return (0);
}
