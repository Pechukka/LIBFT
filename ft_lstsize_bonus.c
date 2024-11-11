/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:30:06 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/26 16:33:12 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Cuenta el número de nodos en una lista enlazada.
 * 
 * @param lst Puntero al primer nodo de la lista.
 * @return El número de nodos en la lista.
 */
int	ft_lstsize(t_list *lst)
{
    int	i;

    i = 0;
    // Recorre la lista y cuenta los nodos
    while (lst != NULL)
    {
        ++i;
        lst = lst->next;
    }
    return (i);
}
