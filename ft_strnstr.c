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
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	temp;
	size_t	length;
	
	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	length = ft_strlen(needle);
	while (i < len)
	{
		temp = 0;
		if (*haystack == needle[temp])
		{
			while (needle[temp] && needle[temp] == haystack[temp])
				temp++;
			if (temp == length)
				return ((char *)haystack);
			haystack++;
		}
		i++;
	}
	return (0);
}

int main(void)
{
	char big[] = "abcdefkjdoawjodaw";
	char small[] = "cd";

	printf("%s\n", ft_strnstr(big, small, 5));
	
	return (0);
}
