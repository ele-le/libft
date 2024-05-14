/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42berlin.de>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:51:41 by er                #+#    #+#             */
/*   Updated: 2024/04/26 20:06:28 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (dst[a] && a < size)
		a++;
	while ((src[b]) && ((a + b + 1) < size))
	{
		dst[a + b] = src[b];
		b++;
	}
	if (a != size)
		dst[a + b] = '\0';
	return (a + ft_strlen(src));
}
/*
int	main(void)
{
	char	str1[] = "Hello!";
	printf("test strlen. length is %d\n", (int)ft_strlen(str1));
//test strlcat + enought space	
	char dest1[20] = "this is";
	size_t new_len1 = ft_strlcat(dest1, " a test", sizeof(dest1));
	printf("I test strlcat on: %s\n", dest1);
	printf("stlcat1 returns value (expected 14): %zu\n", new_len1);
// strlcat + not enough space
	char dest2[10] = "Welcome, ";
	size_t new_len2 = ft_strlcat(dest2, "friend!", sizeof(dest2));
	printf("I test strlcat on: %s\n", dest2);
	printf("stlcat2 returns value (expected 16): %zu\n", new_len2);
		
	return (0);
}*/
