/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:16:08 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/02 14:16:13 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Aplica una función a cada contenido de los nodos de una lista enlazada.
 * 
 * @param lst Puntero al primer nodo de la lista.
 * @param f Función a aplicar a cada contenido de los nodos.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
    // Recorre la lista y aplica la función a cada contenido de los nodos
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}
