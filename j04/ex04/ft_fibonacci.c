/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/26 14:11:24 by mlapeyre          #+#    #+#             */
/*   Updated: 2015/08/26 14:55:37 by mlapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int n;

	n = 0;
	if (index >= 0)
	{
		if (index == 0)
			n = 0;	
		if ( index == 1 || index == 2)
			n = 1;
		if (index > 2)
			n = ft_fibonacci(n-1) + ft_fibonacci(n-2);
	
		return (n);
	}
	else
		return (-1);
}
