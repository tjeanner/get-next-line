/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjeanner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 08:41:35 by tjeanner          #+#    #+#             */
/*   Updated: 2017/01/25 08:41:46 by tjeanner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_power(long n, int a)
{
	int		i;
	long	nb;

	i = 0;
	nb = 1;
	while (i < a)
	{
		nb = nb * n;
		i++;
	}
	return (nb);
}
