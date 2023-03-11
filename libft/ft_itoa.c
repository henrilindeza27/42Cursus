/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrilindeza <henrilindeza@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:59:00 by henrilindez       #+#    #+#             */
/*   Updated: 2023/03/11 07:09:16 by henrilindez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_num(int long nb, int i)
{
	char	*num;

	num = (char *)malloc(i + 1);
	if (!num)
		return (NULL);
	num[i--] = '\0';
	if (nb == 0)
	{
		num[0] = '0';
		return (num);
	}
	if (nb < 0)
	{
		num[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		num[i--] = '0' + (nb % 10);
		nb /= 10;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	long int	nb;
	size_t		i;
	char		*num;

	nb = n;
	i = ft_len(nb);
	num = ft_num(n, i);
	return (num);
}
