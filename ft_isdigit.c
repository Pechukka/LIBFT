/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:15:48 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:32:08 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Verifica si un carácter es un dígito decimal (0-9).
 * 
 * @param c Carácter a verificar.
 * @return 1 si el carácter es un dígito decimal (0-9),
 *         o 0 si el carácter no es un dígito decimal.
 */
int	ft_isdigit(int c)
{
    // Verifica si el carácter está en el rango de los dígitos decimales
	if (c >= 48 && c <= 57)
		return (1);
	// Retorna 1 si es un dígito, 0 en caso contrario
	return (0);
}
