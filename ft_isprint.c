/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:15:43 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:32:02 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Verifica si un carácter es un carácter imprimible, incluyendo el espacio.
 * 
 * @param c Carácter a verificar.
 * @return 1 si el carácter es un carácter imprimible (valores entre 32 y 126),
 *         o 0 si el carácter no es un carácter imprimible.
 */
int	ft_isprint(int c)
{
    // Verifica si el carácter está en el rango de los caracteres imprimibles
    if (c >= 32 && c <= 126)
        return (1);
    // Retorna 0 si el carácter no está en el rango de los caracteres imprimibles
    return (0);
}
