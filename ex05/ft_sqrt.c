/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikilisli <ikilisli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 19:44:10 by ikilisli          #+#    #+#             */
/*   Updated: 2024/08/15 12:58:59 by ikilisli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)

{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	while ((i * i) < nb && i <= 46340)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	if (i * i > nb)
		return (0);
	return (0);
}
