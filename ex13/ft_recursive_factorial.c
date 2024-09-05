/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fjilaias <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:56:56 by fjilaias          #+#    #+#             */
/*   Updated: 2024/05/10 15:57:53 by fjilaias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb > 12 || nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	result = ft_recursive_factorial(nb - 1);
	return (nb * result);
}
