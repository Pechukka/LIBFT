/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:22:50 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/03 16:24:57 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Crea un nuevo nodo para una lista enlazada, asignando memoria para el nodo
 * y estableciendo su contenido.
 * 
 * @param content Puntero al contenido que se almacenará en el nuevo nodo.
 * @return Un puntero al nuevo nodo, o NULL si la asignación de memoria falla.
 */
t_list	*ft_lstnew(void *content)
{
    t_list	*next;
    t_list	*node;

    // Inicializa el puntero al siguiente nodo como NULL
    next = NULL;
    // Asigna memoria para el nuevo nodo
    node = (t_list *)malloc(sizeof(t_list));
    // Si la asignación de memoria falla, retorna NULL
    if (!node)
        return (NULL);
    // Establece el contenido del nodo
    node->content = content;
    // Establece el puntero al siguiente nodo como NULL
    node->next = next;
    // Retorna el puntero al nuevo nodo
    return (node);
}
