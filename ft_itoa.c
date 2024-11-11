/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:51:08 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/03 16:09:28 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/**
 * Convierte un número entero en una cadena de caracteres terminada en nulo.
 * 
 * @param n Número entero a convertir.
 * @return Un puntero a la nueva cadena de caracteres que representa el número entero,
 *         o NULL si la asignación de memoria falla.
 */
char	*ft_itoa(int n)
{
    char	*ptr;
    int		len;
    long	nlong;

    nlong = n;
    // Calcula la longitud del número
    len = ft_numlen(n, 0);
    // Maneja el caso especial de n igual a 0
    if (n == 0)
        return (ft_iszero());
    // Si el número es negativo, convierte a positivo para el procesamiento
    if (n < 0)
        nlong = -nlong;
    // Asigna memoria para la cadena resultante
    ptr = (char *)malloc(sizeof(char) * (len + 1));
    if (!ptr)
        return (NULL);
    // Termina la cadena con un nulo
    ptr[len] = '\0';
    // Llena la cadena con los dígitos del número
    while (nlong)
    {
        ptr[--len] = nlong % 10 + '0';
        nlong /= 10;
    }
    // Añade el signo negativo si es necesario
    if (n < 0)
        ptr[0] = '-';
    return (ptr);
}

int	ft_numlen(int n, int len)
{
    len = 0;
    // Si el número es negativo, conviértelo a positivo y cuenta el signo
    if (n < 0)
    {
        n = -n;
        len++;
    }
    // Cuenta los dígitos del número
    while (n)
    {
        n = n / 10;
        len++;
    }
    return (len);
}

char	*ft_iszero(void)
{
    char	*ptr;

    // Asigna memoria para la cadena "0"
    ptr = (char *)malloc(2);
    if (!ptr)
        return (NULL);
    // Asigna los caracteres '0' y el terminador nulo
    ptr[0] = '0';
    ptr[1] = '\0';
    return (ptr);
}