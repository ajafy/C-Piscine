/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajafy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 09:56:59 by ajafy             #+#    #+#             */
/*   Updated: 2021/06/27 11:59:38 by ajafy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char	c ;

	c = 122 ;
	while (c >= 97)
	{
		write(1, &c, 1);
		c--;
	}
}
