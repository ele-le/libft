/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: er <er@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:47:23 by er                #+#    #+#             */
/*   Updated: 2024/05/04 16:12:51 by er               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_digits(int n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*ft_itoa_min(void)
{
	size_t	len;
	char	*str;

	len = ft_strlen("-2147483648");
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, "-2147483648", len + 1);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	size_t	digits;

	num = n;
	digits = ft_digits(n);
	if (n == INT_MIN)
		return (ft_itoa_min());
	if (n < 0)
	{
		num *= -1;
		digits++;
	}
	str = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str)
		return (NULL);
	*(str + digits) = '\0';
	while (digits--)
	{
		*(str + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
/*
int	main(void)
{
	int	n = -2147483648;

	printf("it is %s\n", ft_itoa(n));
	return (0);
}*/
