/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:45:45 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/02 14:44:24 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Devuelve el último nodo de una lista enlazada.
 * 
 * @param lst Puntero al primer nodo de la lista.
 * @return Un puntero al último nodo de la lista, o NULL si la lista está vacía.
 */
	t_list	*ft_lstlast(t_list *lst)
	{
		// Si la lista está vacía, retorna NULL
		if (!lst)
			return (NULL);
		// Recorre la lista hasta el último nodo
		while (lst->next)
			lst = lst->next;
		// Retorna el puntero al último nodo
		return (lst);
	}
