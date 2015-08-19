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
		return (0); //on travaille uniquement sur des entiers donc on vire les nb negatifs

	if (nb = 1)
		return (1);
						
	if (nb > 1)
	{
		nb--;
		fac *= nb;
	}
	return (fac);
}
// évidemment le main n'est pas à rendre dans le repertoire (abrégé repo pour la suite)
int		main(void)
 {
 	ft_iterative_factorial(10); //on test avec nb = 10
 	return (0);
}				}
