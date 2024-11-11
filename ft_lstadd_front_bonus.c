/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:21:48 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/26 16:32:53 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Añade un nuevo nodo al principio de una lista enlazada.
 * 
 * @param lst Puntero al puntero del primer nodo de la lista.
 * @param new Puntero al nuevo nodo a añadir.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
    // Establece el puntero al siguiente nodo del nuevo nodo como el primer nodo actual
    new->next = *lst;
    // Actualiza el puntero del primer nodo para que apunte al nuevo nodo
    *lst = new;
}
