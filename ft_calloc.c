/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:45:32 by er                #+#    #+#             */
/*   Updated: 2024/05/03 18:17:34 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** The calloc() function contiguously allocates enough space for 
 *   ~count objects elements 
 *   ~that are size bytes of memory each.
 *   returns a pointer to the allocated memory. 
	 The allocated memory is filled with bytes of value zero.

	 If error return NULL 
	 and set errno to ENOMEM.

	 In the C standard library, calloc is expected to return a 
	 valid pointer when both nmemb and size are 0.

*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dest;

	if (count > 0 && SIZE_MAX / count < size)
		return (NULL);
	tot_size = size * count;
	dest = malloc(tot_size);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, tot_size);
	return (dest);
}
/*
int	main(void)
{
	int	*numbers;

	numbers = (int *)ft_calloc(3, sizeof(int));
	if (numbers == NULL)
	{
		printf("Memory allocation failed!\n");
		return (1);
	}
	numbers[0] = 10;
	numbers[1] = 20;
	numbers[2] = 30;
	printf ("Numbers: %d%d%d\n", numbers[0], numbers[1], numbers[2]);
	free(numbers);
	return (0);
}*/
