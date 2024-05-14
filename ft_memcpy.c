/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42berlin.de>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:25:51 by er                #+#    #+#             */
/*   Updated: 2024/04/25 19:49:46 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	const char	*char_src;
	size_t		i;

	char_dest = (char *)dest;
	char_src = (const char *)src;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src_str[] = "Hello, bebe";
	char	dest_array[sizeof(src_str)];
	printf("Std is %s\n", src_str);
	ft_memcpy(dest_array, src_str, sizeof(src_str));
	printf("dest is %s\n",dest_array);
	return (0);
}*/
