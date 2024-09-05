/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:22:29 by fjilaias          #+#    #+#             */
/*   Updated: 2024/05/07 12:55:23 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		array[i] = min;
		min ++;
		i ++;
	}
	return (array);
}
