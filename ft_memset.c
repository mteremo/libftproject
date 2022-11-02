/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matavare <matavare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:55:32 by matavare          #+#    #+#             */
/*   Updated: 2022/11/02 16:53:03 by matavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c1;

	i = 0;
	str = (unsigned char *) s;
	c1 = (unsigned char) c;
	while (i < len)
	{
		str[i] = c1;
		i++;
	}
	return (s);
}
