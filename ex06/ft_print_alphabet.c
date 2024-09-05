/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:18:16 by fjilaias          #+#    #+#             */
/*   Updated: 2024/05/03 10:38:09 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	i;

	i = '`';
	while (++i <= 'z')
		ft_putchar(i);
}
