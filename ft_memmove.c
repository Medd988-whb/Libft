/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohaben- <mohaben-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:40:04 by mohaben-          #+#    #+#             */
/*   Updated: 2024/10/26 10:13:01 by mohaben-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	p_dest = (unsigned char *)dest;
	p_src = (const unsigned char *)src;
	if (p_dest > p_src)
	{
		while (n--)
			p_dest[n] = p_src[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}