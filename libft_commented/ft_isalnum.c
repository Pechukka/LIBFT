/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:16:08 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:32:18 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Verifica si un carácter es una letra del alfabeto (mayúscula o minúscula)
 * o un dígito decimal (0-9).
 * 
 * @param c Carácter a verificar.
 * @return 1 si el carácter es una letra del alfabeto (mayúscula o minúscula)
 *         o un dígito decimal (0-9), o 0 si no lo es.
 */
int	ft_isalnum(int c)
{
    // Verifica si el carácter es una letra minúscula, mayúscula o un dígito decimal
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) || (c >= 48 && c <= 57))
        return (1);
    // Retorna 0 si no es una letra ni un dígito
    return (0);
}
