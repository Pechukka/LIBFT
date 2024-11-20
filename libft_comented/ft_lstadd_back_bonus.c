/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:51:41 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/03 16:25:02 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Añade un nuevo nodo al final de una lista enlazada.
 * 
 * @param lst Puntero al puntero del primer nodo de la lista.
 * @param new Puntero al nuevo nodo a añadir.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

    // Si la lista está vacía, el nuevo nodo se convierte en el primer nodo
    if (*lst == NULL)
        *lst = new;
    else
    {
        // Encuentra el último nodo de la lista
        last = ft_lstlast(*lst);
        // Añade el nuevo nodo al final de la lista
        last->next = new;
    }
}
