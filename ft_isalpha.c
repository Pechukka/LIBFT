/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:16:03 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/05 17:32:15 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Verifica si un carácter es una letra del alfabeto (mayúscula o minúscula).
 * 
 * @param c Carácter a verificar.
 * @return 1 si el carácter es una letra del alfabeto (mayúscula o minúscula),
 *         o 0 si el carácter no es una letra del alfabeto.
 */
int	ft_isalpha(int c)
{
// Verifica si el carácter es una letra minúscula o mayúscula
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return (1);
    // Retorna 1 si es una letra, 0 en caso contrario
    return (0);
}
