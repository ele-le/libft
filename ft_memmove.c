/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42berlin.de>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:39:08 by er                #+#    #+#             */
/*   Updated: 2024/04/25 19:48:46 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*char_dest;
	const char	*char_src;

	char_dest = (char *)dest;
	char_src = (const char *)src;
	if (char_src < char_dest && char_src + n > char_dest)
	{
		char_dest += n - 1;
		char_src += n - 1;
		while (n-- > 0)
		{
			*char_dest-- = *char_src--;
		}
	}
	else 
	{
		while (n -- > 0)
		{
			*char_dest++ = *char_src++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "ci vidiamo domani";
	char	dest[sizeof(src)];

	printf("src is %s\n", src);
	ft_memmove(dest, src, sizeof(src));
	printf("dest is %s\n", dest);
	return (0);
}*/
