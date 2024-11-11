/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:53:34 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/08 17:58:52 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Convierte una cadena de caracteres en un número entero (tipo int).
 * 
 * @param str Cadena de caracteres que representa un número.
 * @return El valor entero convertido de la cadena.
 */
int	ft_atoi(const char *str)
{
    int	i;
    int	sign;
    int	result;

    result = 0;
    sign = 1;
    i = 0;
    // Ignora los caracteres de espacio en blanco al principio de la cadena
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r'
        || str[i] == '\v' || str[i] == '\f')
        i++;
    // Maneja el signo del número
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    // Convierte los caracteres numéricos en el valor entero
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    // Aplica el signo al resultado final
    return (result * sign);
}
