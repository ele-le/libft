/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42berlin.de>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:40:51 by er                #+#    #+#             */
/*   Updated: 2024/04/19 18:41:02 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
	{
		return (1);
	}
	else if (c >= 48 && c <= 57)
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
	int	str1 = 'F';
	int	str2 = '8';

	printf("%c gets %d\n", str1, ft_isalnum(str1));
	printf("%c deserves %d\n", str2, ft_isalnum(str2));
	return (0);
}*/
