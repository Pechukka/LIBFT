/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: epedrosa <epedrosa@student.42malaga.com    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/10/13 17:51:44 by epedrosa          #+#    #+#             */
/*   Updated: 2024/10/13 17:51:44 by epedrosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;
	char	c;

	nl = n;
	if (nl < 0)
	{
		write(fd, "-", 1);
		nl = -nl;
	}
	if (nl >= 10)
		ft_putnbr_fd(nl / 10, fd);
	c = (nl % 10) + '0';
	write(fd, &c, 1);
}
