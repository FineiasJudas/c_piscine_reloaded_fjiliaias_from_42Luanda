/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:38:34 by fjilaias          #+#    #+#             */
/*   Updated: 2024/05/03 10:56:12 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	i;

	i = '/';
	while (i++ < '9')
		ft_putchar(i);
}
