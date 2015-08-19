/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 13:20:24 by mlapeyre          #+#    #+#             */
/*   Updated: 2015/08/19 14:19:37 by mlapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = nb;
	if (nb <= 0 || power < 0)
		result = 0;
	if(nb = 1 || power = 0)
		result = 1;
	if(power = 1)
		result = nb;
	if(power > 1)
	{
		result *= nb;
		power--;	
		ft_recursive_power;
	}
	return (result);
}
