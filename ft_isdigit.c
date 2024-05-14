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

int	ft_isdigit(int c)
{
	if (!(c >= 48 && c <= 57))
	{
		return (0);
	}
	else
		return (1);
}
/*
#include <stdio.h>

int	main(void)

{
	int	str1 = 'c';
	int	str2 = '8';

	printf("%c gets %d\n", str1, ft_isdigit(str1));
	printf("%c deserves %d\n", str2, ft_isdigit(str2));
	return (0);
}*/
