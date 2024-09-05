/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:40:50 by fjilaias          #+#    #+#             */
/*   Updated: 2024/05/10 14:35:07 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
		count ++;
	if (s1[count] == s2[count])
		return (0);
	else
		return (s1[count] - s2[count]);
}
