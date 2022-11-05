/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecoutr <alecoutr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:01:32 by alecoutr          #+#    #+#             */
/*   Updated: 2022/11/05 22:16:41 by alecoutr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*cpydst;
	char	*cpysrc;

	if (!dst && !src)
		return (NULL);
	cpydst = (char *)dst;
	cpysrc = (char *)src;
	if (cpysrc < cpydst)
		while (len--)
			*(cpydst + len) = *(cpysrc + len);
	else
		while (len--)
			(*(char *)dst++) = (*(const char *)src++);
	return ((char *)dst);
}
