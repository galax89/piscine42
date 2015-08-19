/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                                            */
/*   Created: 2015/08/11 16:38:12 by mlapeyre          #+#    #+#             */
/*   Updated: 2015/08/18 11:09:39 by mlapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fac;

	fac = nb;

	if (nb < 0)
		return (0);

	if (nb == 1 || nb == 0)
		return (1);

	while (nb > 1)
	{	
		nb--;		
		fac = fac * nb;
	}  
	return (fac);
}

int 	main(void)
{
	ft_iterative_factorial(10);
	return (0);
}
