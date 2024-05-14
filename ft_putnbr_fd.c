/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42berlin.de>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:09:31 by er                #+#    #+#             */
/*   Updated: 2024/05/01 19:21:44 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	ft_putstr_fd(ft_itoa(n), fd);
}
/*
int	main(void)
{
	int	numbers[5] = {0, 123, -333, INT_MAX, INT_MIN};
	int	fd = 1;
	size_t	i = 0;

	while (i < sizeof(numbers) / sizeof(numbers[0]))
	{
		ft_putnbr_fd(numbers[i], fd);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}*/
