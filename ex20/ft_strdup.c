/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:47:47 by fjilaias          #+#    #+#             */
/*   Updated: 2024/05/07 12:04:02 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i ++;
	}
	cpy = (char *)malloc(i * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i ++;
	}
	cpy[i] = '\0';
	return (cpy);
}
