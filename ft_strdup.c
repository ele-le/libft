/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 16:18:52 by er                #+#    #+#             */
/*   Updated: 2024/05/08 17:43:01 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		buf_size;

	buf_size = ft_strlen(src) + 1;
	str = malloc(buf_size);
	if (str == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(str, src, buf_size);
	return (str);
}
/*
int	main(void)
{
	const char *source = "This is a string!";
	char	*duplicate = ft_strdup(source);
	if (duplicate == NULL)
	{
		printf("allocation fail\n");
	}
	else
	{
		printf("Orig string: %s\n", source);
		printf("Duplicated str: %s\n", duplicate);
		free(duplicate);
	}
	return (0);
}*/
