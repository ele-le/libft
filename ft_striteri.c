/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42berlin.de>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:06:40 by er                #+#    #+#             */
/*   Updated: 2024/05/01 18:34:33 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	inner_f(unsigned int i, char *str)
{
	printf("the inner f at index %d: %c\n", i, *str);
}

int	main(void)
{
	char	str[] = "ulalala";
	printf("vlean str: %s\n", str);
	ft_striteri(str, inner_f);
	printf("after striteri: %s\n", str);
	return (0);
}*/
