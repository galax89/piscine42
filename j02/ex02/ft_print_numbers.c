/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/24 16:22:46 by mlapeyre          #+#    #+#             */
/*   Updated: 2015/08/24 16:37:59 by mlapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers()
{
	char	numeral;

	numeral = '0';
	while (numeral <= '9')
	{
		ft_putchar(numeral);
		numeral++;
	}
}
