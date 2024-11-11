/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:13:24 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/26 16:32:57 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Elimina y libera un nodo de una lista enlazada, utilizando una función de eliminación
 * proporcionada para liberar el contenido del nodo.
 * 
 * @param lst Puntero al nodo a eliminar.
 * @param del Función de eliminación para liberar el contenido del nodo.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
    // Llama a la función de eliminación para liberar el contenido del nodo
    del(lst->content);
    // Libera la memoria del nodo
    free(lst);
}
