/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:31:18 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/15 16:32:19 by ikilisli         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)

{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}
