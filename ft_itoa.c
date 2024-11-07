/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:51:08 by epedrosa          #+#    #+#             */
/*   Updated: 2024/11/03 16:09:28 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n, int len)
{
	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_iszero(void)
{
	char	*ptr;

	ptr = (char *)malloc(2);
	if (!ptr)
		return (NULL);
	ptr[0] = '0';
	ptr[1] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	long	nlong;

	nlong = n;
	if (nlong == 0)
	{
		ptr = ft_iszero();
		return (ptr);
	}
	len = ft_numlen(n, 0);
	if (nlong < 0)
		nlong = -nlong;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	while (nlong > 0)
	{
		ptr[--len] = nlong % 10 + '0';
		nlong = nlong / 10;
	}
	if (len != 0)
		ptr[0] = '-';
	return (ptr);
}
