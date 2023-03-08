/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: henrilindeza <henrilindeza@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:51:58 by henrilindez       #+#    #+#             */
/*   Updated: 2023/03/08 18:55:57 by henrilindez      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	dest = malloc(nmemb * size);
	if (dest == NULL)
		return (0);
	ft_memset(dest, 0, nmemb * size);
	return (dest);
}
