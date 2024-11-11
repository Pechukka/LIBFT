/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:14:59 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/03 16:24:52 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Elimina y libera todos los nodos de una lista enlazada, utilizando una función de eliminación
 * proporcionada para liberar el contenido de cada nodo.
 * 
 * @param lst Puntero al puntero del primer nodo de la lista.
 * @param del Función de eliminación para liberar el contenido de cada nodo.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list	*temp;

    // Recorre la lista y elimina cada nodo
    while (*lst)
    {
        // Guarda el puntero al siguiente nodo
        temp = (*lst)->next;
        // Llama a la función de eliminación para liberar el contenido del nodo
        del((*lst)->content);
        // Libera la memoria del nodo
        free(*lst);
        // Avanza al siguiente nodo
        *lst = temp;
    }
    // Establece el puntero al primer nodo como NULL
    *lst = NULL;
}
