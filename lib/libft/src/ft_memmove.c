/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcuzin <jcuzin@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:26:58 by jcuzin            #+#    #+#             */
/*   Updated: 2024/03/28 16:33:16 by jcuzin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst0;
	unsigned const char	*src0;

	if (!dst && !src)
		return (dst);
	dst0 = (unsigned char *)dst;
	src0 = (unsigned char *)src;
	if (src < dst)
		while (len--)
			dst0[len] = src0[len];
	else
		ft_memcpy(dst0, src0, len);
	return (dst);
}
