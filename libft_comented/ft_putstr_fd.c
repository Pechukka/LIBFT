/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:40:26 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/13 17:40:26 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Escribe una cadena de caracteres en un descriptor de archivo especificado.
 * 
 * @param s Cadena de caracteres a escribir.
 * @param fd Descriptor de archivo en el que se escribirá la cadena.
 */
void	ft_putstr_fd(char *s, int fd)
{
    // Verifica si la cadena no es nula
    if (s != NULL)
        // Escribe la cadena en el descriptor de archivo
        write(fd, s, ft_strlen(s));
}
