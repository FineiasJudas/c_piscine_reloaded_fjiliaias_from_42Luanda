/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:11:38 by fjilaias          #+#    #+#             */
/*   Updated: 2024/05/08 12:39:18 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	h;
	int	num;

	h = 0;
	num = 0;
	while (tab[h])
	{
		if (f(tab[h]) == 1)
			num++;
		h++;
	}
	return (num);
}
