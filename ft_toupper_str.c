/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/17 02:38:51 by bbauer            #+#    #+#             */
/*   Updated: 2017/02/17 02:38:53 by bbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_toupper_str(char *str)
{
	char	*temp;

	temp = str;
	while (*temp != '\0')
	{
		if (*temp >= 97 && *temp <= 122)
			*temp -= 32;
		temp++;
	}
	return (str);
}
