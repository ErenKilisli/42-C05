/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 20:04:05 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/17 16:14:58 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	recursive(long i, int nb)
{
	if ((i * i) > nb)
		return (1);
	if (nb % i == 0)
		return (0);
	return (recursive((i + 1), nb));
}

int	ft_is_prime(int nb)

{
	int	i;

	i = 3;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	return (recursive(i, nb));
}
