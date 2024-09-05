/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:09:25 by fjilaias          #+#    #+#             */
/*   Updated: 2024/05/06 13:49:51 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		while (*av[i])
			ft_putchar(*av[i]++);
		ft_putchar('\n');
		i ++;
	}
	return (0);
}
