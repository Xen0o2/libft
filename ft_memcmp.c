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

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*other1;
	char	*other2;

	other1 = (char *)s1;
	other2 = (char *)s2;
	while (n && *other1 == *other2)
	{
		other1++;
		other2++;
		n--;
	}
	if (n)
		return ((unsigned char)*other1 - (unsigned char)*other2);
	else
		return (0);
}
