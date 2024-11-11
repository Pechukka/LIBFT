/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:51:44 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/13 17:51:44 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Escribe un número entero en un descriptor de archivo especificado.
 * 
 * @param n Número entero a escribir.
 * @param fd Descriptor de archivo en el que se escribirá el número.
 */
void	ft_putnbr_fd(int n, int fd)
{
    long	nl;
    char	c;

    // Convierte el número a long para manejar el valor absoluto de INT_MIN
    nl = n;
    // Si el número es negativo, escribe el signo y convierte a positivo
    if (nl < 0)
    {
        write(fd, "-", 1);
        nl = -nl;
    }
    // Si el número es mayor o igual a 10, llama recursivamente para escribir los dígitos anteriores
    if (nl >= 10)
        ft_putnbr_fd(nl / 10, fd);
    // Convierte el dígito actual a carácter y lo escribe
    c = (nl % 10) + '0';
    write(fd, &c, 1);
}
