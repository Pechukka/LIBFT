/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:32:32 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/13 17:32:32 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Escribe un carácter en un descriptor de archivo especificado.
 * 
 * @param c Carácter a escribir.
 * @param fd Descriptor de archivo en el que se escribirá el carácter.
 */
void	ft_putchar_fd(char c, int fd)
{
    // Escribe el carácter en el descriptor de archivo
    write(fd, &c, 1);
}
