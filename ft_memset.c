/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:43:37 by er                #+#    #+#             */
/*   Updated: 2024/05/08 17:40:54 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*char_ptr;
	size_t	i;

	char_ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		char_ptr[i] = (char)c;
		i++;
	}
	return (s);
}
/*
int main(void) 
{
    char my_array[10] = "meow";
    char my_arr[11] = "barkbark";
    //size_t n = 4;
    printf("orig array:%s\n", my_array);
    ft_memset(my_array, '*', 2);
    printf("new array: %s\n", my_array);
    ft_memset(my_arr, 'x', 6);
    printf("new array with xx: %s\n", my_arr);
    return (0);
}*/
