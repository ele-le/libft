/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:55:45 by er                #+#    #+#             */
/*   Updated: 2024/05/05 16:24:16 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*ft_substr(): extracts a substring from the original 
string based on the provided starting index and maximum length, 
handling memory allocation and null termination.
 *i: Loop counter for iterating through the original string (s).
 *j: Loop counter for tracking the index within the substring (str).
 *str: Pointer to the newly allocated memory for the substring.
 * if (i >= start && j < len): Checks if the current index (i) 
 is within the desired substring range (from start to len). 
 * 
 */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	remainig;
	char	*str;
	size_t	alloc_size;

	remainig = ft_strlen(s) - start;
	if (len > remainig)
		alloc_size = remainig + 1;
	else 
		alloc_size = len + 1;
	str = (char *)malloc(sizeof(*s) * (alloc_size));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}
/*
int	main(void)
{
	char const		*s;
	size_t			len;
	unsigned int	start;

	s = "abcdefghijklmnopqrstuvwxyz";
	start = 4;
	len = 3;
	printf("sub str is: %s\n", ft_substr(s, start, len));
	return (0);
}*/
