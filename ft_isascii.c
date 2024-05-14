/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42berlin.de>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:08:28 by er                #+#    #+#             */
/*   Updated: 2024/04/19 18:08:36 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)

{
	int	str1 = '%';
	int	str2 = '!';

	printf("%c gets %d\n", str1, ft_isascii(str1));
	printf("%c deserves %d\n", str2, ft_isascii(str2));
	return (0);
}*/
