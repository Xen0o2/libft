/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecoutr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 02:58:11 by alecoutr          #+#    #+#             */
/*   Updated: 2022/07/18 17:34:36 by alecoutr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char cc;
	unsigned char *ss;

	cc = (unsigned char)c;
	ss = (unsigned char *)s;
	while (n)
	{
		if (*ss == cc)
			return (ss);
		n--;
		ss++;
	}
	return (0);
}
