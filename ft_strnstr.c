/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsouza-r <lsouza-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:10:05 by lsouza-r          #+#    #+#             */
/*   Updated: 2023/12/05 21:26:07 by lsouza-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (NULL);
}
