/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:16:51 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/03 16:28:15 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Aplica una función a cada contenido de los nodos de una lista enlazada,
 * creando una nueva lista con los resultados de las aplicaciones sucesivas.
 * Utiliza una función de eliminación para liberar el contenido de los nodos en caso de error.
 * 
 * @param lst Puntero al primer nodo de la lista.
 * @param f Función a aplicar a cada contenido de los nodos.
 * @param del Función de eliminación para liberar el contenido de los nodos en caso de error.
 * @return Un puntero al primer nodo de la nueva lista, o NULL si la asignación de memoria falla.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_lst;
    t_list	*new_node;
    void	*new_content;

    // Verifica si la lista o la función son nulas
    if (!lst || !f)
        return (NULL);
    new_lst = NULL;
    // Recorre la lista original
    while (lst)
    {
        // Aplica la función al contenido del nodo actual
        new_content = f(lst->content);
        // Crea un nuevo nodo con el contenido modificado
        new_node = ft_lstnew(new_content);
        // Si la creación del nuevo nodo falla, libera la memoria y retorna NULL
        if (!new_node)
        {
            del(new_content);
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        // Añade el nuevo nodo al final de la nueva lista
        ft_lstadd_back(&new_lst, new_node);
        // Avanza al siguiente nodo de la lista original
        lst = lst->next;
    }
    // Retorna el puntero al primer nodo de la nueva lista
    return (new_lst);
}
