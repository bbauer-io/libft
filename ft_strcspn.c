/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:53:06 by bbauer            #+#    #+#             */
/*   Updated: 2017/04/11 13:50:23 by bbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcspn(const char *s1, const char s2)
{
	const char	*sc1;

	sc1 = s1;
	while (*sc1 != '\0')
	{
		if (*sc1 == s2)
			return (sc1 - s1);
		++sc1;
	}
	return (sc1 - s1);
}