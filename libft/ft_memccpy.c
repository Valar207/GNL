/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:01:53 by vrossi            #+#    #+#             */
/*   Updated: 2019/04/18 18:42:35 by vrossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	const unsigned char		*s;
	unsigned char			*d;

	s = src;
	d = dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		dst = dst + 1;
		if (s[i] == (unsigned char)c)
			return (dst);
		i++;
	}
	return (NULL);
}
