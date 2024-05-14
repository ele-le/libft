/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42berlin.de>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:19:46 by er                #+#    #+#             */
/*   Updated: 2024/04/22 18:43:30 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* this bzero function iterates through the memory pointed 
to by s and sets each byte to zero, 
so the outcome is an empty string due to \n in printf.
printf stops printing when it encounters the null terminator \0
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*char_ptr;
	size_t	i;

	char_ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		char_ptr[i] = 0;
		i++;
	}
}
/*void bzero(void *s, size_t n);
void *memset(void *s, int c, size_t n);
int	main(void)
{
   char   my_array[] = "Hellooooo";

   ft_bzero(my_array, 2); //my ft_bzero

   char new_arr[] = "Piupiupiupiu";
   bzero(new_arr, 3);//orig bzero
   
   char mems[] = "ulalala";
   memset(mems, '*', 3);
   
   printf("%s\n", my_array); // Output: He
   printf("%s\n", new_arr); // Output: Piu
   printf("%s\n", mems); //check memset, no reason
   return (0);
}*/
