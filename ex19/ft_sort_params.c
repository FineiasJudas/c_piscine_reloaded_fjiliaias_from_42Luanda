/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 09:21:41 by fjilaias          #+#    #+#             */
/*   Updated: 2024/05/10 15:21:53 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

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

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char *av[])
{
	int		s1;

	s1 = 1;
	while (s1 < ac - 1)
	{
		if (ft_strcmp(av[s1], av[s1 + 1]) > 0)
		{
			ft_swap(&av[s1], &av[s1 + 1]);
			s1 = 0;
		}
		s1 ++;
	}
	s1 = 1;
	while (s1 < ac)
	{
		ft_putstr(av[s1]);
		ft_putchar('\n');
		s1 ++;
	}
	return (0);
}
