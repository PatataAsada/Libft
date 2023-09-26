/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:14:36 by yemoreno          #+#    #+#             */
/*   Updated: 2023/09/19 19:17:44 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long int i);

char	*ft_itoa(int n)
{
	char		*result;
	long int	len;
	char		*min_int;

	min_int = "-2147483648";
	len = ft_count(n);
	result = ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '0';
	result[len--] = 0;
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	if (n == INT_MIN)
		ft_strlcpy(result, min_int, len + 2);
	while (n && n != INT_MIN)
	{
		result[len--] = n % 10 + 48;
		n /= 10;
	}
	return (result);
}

static int	ft_count(long int i)
{
	int	count;

	count = 0;
	if (i <= 0)
		++count;
	while (i && ++count)
		i /= 10;
	return (count);
}
