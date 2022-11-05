/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandrelecoutre <alexandrelecoutre@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:29:12 by alexandrele       #+#    #+#             */
/*   Updated: 2022/11/05 15:31:32 by alexandrele      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;
	
	length = 0;
	while (s[length])
		length++;
	return (length);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	cc;

	i = 0;
	cc = (char) c;
	while (s[i])
		i++;
	i++;
	while (i)
		if (s[--i] == cc)
			return ((char *)s + i);
	return (0);
}
