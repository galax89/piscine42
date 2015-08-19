/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlapeyre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 22:13:09 by mlapeyre          #+#    #+#             */
/*   Updated: 2015/08/19 22:35:36 by mlapeyre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	if (src[i] == '\0')
		src[i] = dest[i]
	return `(dest);	
}